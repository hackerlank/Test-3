/*
 * ServerManager.h
 *
 *  Created on: 2013��9��16��
 *      Author: helh
 */

#ifndef SERVERMANAGER_H_
#define SERVERMANAGER_H_

#include "./Network/Message_Facade.h"
#include "./Network/Service_Handler.h"
#include "./Network/InetAddress.h"
#include "./Network/MessageHandler.h"
#include "Smart_Ptr.h"
#include "./Network/NetWorkConfig.h"
#include <map>
#include "define.h"
#include "Common.h"
#include <vector>
#include "ServerMsgDefine.h"
#include "MsgDefineMacro.h"
#include "./google/protobuf/message.h"
#include "MessageStruct/MonitorMap/MonitorMap.pb.h"
#include "./Log/Logger.h"
#include "MessageStruct/CharLogin/PlayerInfo.pb.h"

using namespace CommBaseOut;
using namespace std;

typedef struct sClientItem : public Ref_Object
{
	int channelID;
	int group;
	int gsChannelID;
	string ip;
	DWORD64 charID;
	int64 mapID;
	WORD gsID;

	sClientItem()
	{
		channelID = -1;
		group = -1;
		gsChannelID = -1;
		charID = -1;
		mapID = -1;
		gsID = -1;
	}

	void clear()
	{
		channelID = -1;
		charID = -1;
		mapID = -1;
		gsID = -1;
	}
}ClientItem;

typedef struct sSvrItem : public Ref_Object
{
	int channelID;
	short int remoteID;
	unsigned char remoteType;
	string ip;
	map<int64, int> mapPlayer; //mapid  �� ��  socket

	int GetPlayerNum()
	{
		int playernum = 0;

		map<int64, int>::iterator it = mapPlayer.begin();
		for(; it!=mapPlayer.end(); ++it)
		{
			playernum += it->second;
		}

		return playernum;
	}

	sSvrItem()
	{
		channelID = -1;
		remoteID = -1;
		remoteType = 0;
	}

	void clear()
	{
		channelID = -1;
		remoteID = -1;
		remoteType = 0;
		mapPlayer.clear();
	}
}SvrItem;

typedef struct sConItem : public Ref_Object
{
	int channelID;
	short int remoteID;
	unsigned char remoteType;
	string ip;
	sConItem()
	{
		channelID = -1;
		remoteID = -1;
		remoteType = 0;
	}

	void clear()
	{
		channelID = -1;
		remoteID = -1;
		remoteType = 0;
	}
}ConItem;

class ConnTimeout : public Task
{
	friend class ServerConHandler ;

	typedef struct sConnClient : public Ref_Object
	{
		DWORD64 time;
		DWORD64 charid;
		int64 mapID;
		WORD gsID;
		int channeid;
		int group;
		int gsChannelID;
		string ip;
		bool isDel;

		sConnClient():time(0),charid(0),mapID(0),gsID(0),channeid(-1),group(-1),gsChannelID(-1),isDel(false)
		{

		}

		~sConnClient()
		{
			if(channeid >= 0)
			{
				Message_Facade::CloseChannel(channeid);
				channeid = -1;
			}
		}

	}ConnClient;

public:
	ConnTimeout();
	~ConnTimeout();

	bool AddTimeout(const int64 &charid, const DWORD64 &time, const int64 &mapid, const WORD &gsid, const int &group);

	bool GetClientChannelByCharID(const int64 &charid, int & channel);
	int GetGSChannelIDByCharID(const int64 &charid);
	bool GetGSChannelAndCharIDByChannel(const int &channel, int & gsChannel, int64 &charid);

	bool UpdatePlayerInfo(int64 charid, int channelid, string &ip);

	//更新场景id
	void UpdateMapID(const int64 &charid, const int64 &mapid, int channelid)
	{
		GUARD_WRITE(CRWLock, obj, &m_timeLock);
		map<int64, Safe_Smart_Ptr<ConnClient> >::iterator it = m_timeout.find(charid);
		if(it != m_timeout.end())
		{
			it->second->gsChannelID = channelid;
			it->second->mapID = mapid;
		}
	}

	void ChangeMapUpdateInfo(int64 charid, int channelid, int gsid, int group)
	{
		GUARD_WRITE(CRWLock, obj, &m_timeLock);
		map<int64, Safe_Smart_Ptr<ConnClient> >::iterator it = m_timeout.find(charid);
		if(it != m_timeout.end())
		{
			it->second->gsChannelID = Message_Facade::BindGroupChannel(it->second->channeid, group);
			it->second->gsID = gsid;
			it->second->group = group;
		}
	}

	//移出某个GameServer的玩家
	void removePlayerByGsID(WORD gsId);

	//更新gsid
	void UpdateGameserverID(const int &id, const int64 &charid)
	{
		GUARD_WRITE(CRWLock, obj, &m_timeLock);
		map<int64, Safe_Smart_Ptr<ConnClient> >::iterator it = m_timeout.find(charid);
		if(it != m_timeout.end())
		{
			it->second->gsID = id;
		}
	}

	//��ҵ�¼���Ͱ�ʱ�任������ʱ��
	bool PlayerLogin(const int64 &charid, Safe_Smart_Ptr<ConnClient> &client);

	//ͬ������
	void SynchHeartBeat(const int64 &charid);

	//����м�¼�ͷ���true������false
	bool DelTimeout(const int64  &charid);

	//���ͻ�����Ϣ
	void SetClientInfo(const int64  &charid, Safe_Smart_Ptr<sClientItem> &client);
	int64 GetCharIDByChannelID(int channelid)
	{
		GUARD_READ(CRWLock, obj, &m_timeLock);
		map<int64, Safe_Smart_Ptr<ConnClient> >::iterator it = m_timeout.begin();
		for(; it!=m_timeout.end(); ++it)
		{
			if(it->second->channeid == channelid)
			{
				return it->first;
			}
		}

		return 0;
	}

	bool IsInTimeoutList(int64 charid)
	{
		GUARD_READ(CRWLock, obj, &m_timeLock);
		map<int64, Safe_Smart_Ptr<ConnClient> >::iterator it = m_timeout.find(charid);
		if(it != m_timeout.end())
		{
			return true;
		}

		return false;
	}

	void Close()
	{
		End();
	}

	//添加移出检测连接
	void clientConnect(int channel,int64 time);
	void removeConnect(int channel);
	void checkConnect();

private:
	virtual int svr();

private:
	map<int64, Safe_Smart_Ptr<ConnClient> > m_timeout;    //charid   ��   client()
	CRWLock m_timeLock;

	//用于检测连接的有效性
	std::map<int,int64> m_connectList;
	CRWLock m_connectLock;

	Event m_event;
};

class ServerConHandler:public Message_Service_Handler, public Message_Handler, public Request_Handler, public Ack_Handler
{
public:

	~ServerConHandler();

	virtual void on_new_channel_build(int channel_id,short int local_id,unsigned char local_type,short int remote_id,unsigned char remote_type,Safe_Smart_Ptr<Inet_Addr> remote_address);

	virtual void on_channel_error(int channel_id,short int local_id,unsigned char local_type,short int remote_id,unsigned char remote_type,int error_code,Safe_Smart_Ptr<Inet_Addr> remote_address);

	virtual void on_connect_failed(int connector_id,short int local_id,unsigned char local_type,short int remote_id,unsigned char remote_type,int error,Safe_Smart_Ptr<Inet_Addr> remote_address);

	static ServerConHandler * GetInstance()
	{
		if(m_instance == 0)
		{
			m_instance = new ServerConHandler();
		}

		return m_instance;
	}

	void RegisterMsg()
	{
		DEF_MSG_REQUEST_REG_FUN(eGateServer, MSG_SIM_GT2GM_PUSHSERVERID);
		DEF_MSG_SIMPLE_REG_FUN(eGateServer, MSG_SIM_GM2GT_PUSHALLMAP);
		DEF_MSG_SIMPLE_REG_FUN(eGateServer, MSG_SIM_GM2GT_PLAYER_EXIT);
		DEF_MSG_SIMPLE_REG_FUN(eGateServer, MSG_REQ_WS2GT_CREATESCENE);
		DEF_MSG_ACK_REG_FUN(eGateServer, MSG_REQ_GT2GM_PLAYEREXIT);
	}

	bool PlayerLogin(const int64 &charid, const int64 & mapid);

	void SynchHeartBeat(const int &channel);

	DEF_MSG_REQUEST_DECLARE_FUN_H(MSG_SIM_GT2GM_PUSHSERVERID);
	DEF_MSG_SIMPLE_DECLARE_FUN_H(MSG_SIM_GM2GT_PUSHALLMAP);
	DEF_MSG_SIMPLE_DECLARE_FUN_H(MSG_SIM_GM2GT_PLAYER_EXIT);
	DEF_MSG_SIMPLE_DECLARE_FUN_H(MSG_REQ_WS2GT_CREATESCENE);
	DEF_MSG_ACK_DECLARE_FUN_H(MSG_REQ_GT2GM_PLAYEREXIT);

	virtual void Handle_Request(Safe_Smart_Ptr<Message> &message);
	virtual void Handle_Message(Safe_Smart_Ptr<Message> &message);
	virtual void Handle_Ack(Safe_Smart_Ptr<Message> &message);

	void DestoryInstance()
	{
		if(m_instance)
		{
			delete m_instance;
			m_instance = 0;
		}
	}

	ConItem * GetLoginHandler()
	{
		return &m_loginServer;
	}

	//客户端连接上
	void clientConnect(int channel, int64 time);

	//移除连接
	void removeConnect(int channel);

	//关闭客户端的频道连接
	void closeClientChannel(int channel)
	{
		GUARD_WRITE(CRWLock, obj, &m_clientMutex);
		if(channel>=0 && channel<(int)m_client.size())
		{
			m_client[channel] = NULL;
		}
	}

	short int GetLocalID()
	{
		return m_localID;
	}

	unsigned char GetLocalType()
	{
		return m_localType;
	}

	void SetIP(string &ip)
	{
		m_ip = ip;
	}
	string &GetIP()
	{
		return m_ip;
	}

	void SetPort(short int port)
	{
		m_port = port;
	}
	short int GetPort()
	{
		return m_port;
	}

	//获得所有地图基本信息
	void GetAllMapInfo(MonitorMap::mapInfo &info);
	//获得指定地图里所有角色信息
	void GetAllPlayerInfoByMapId(int id , MonitorMap::mapPlayerInfo &info);

	bool AddClientTimeOut(int64 mapid, DWORD64 charid, Safe_Smart_Ptr<CommBaseOut::Message> &message);

	//获得gs唯一id和gameserver
	bool GetGameServerInfo(int64 mapid, short int &serverid, Safe_Smart_Ptr<SvrItem> &gaSvr);
	//获得gs唯一id和gameserver
	bool GetGameServerInfo(int64 mapid, Safe_Smart_Ptr<SvrItem> &gaSvr);

	bool UpdateClientInfo(int64 charid, int channelid, string ip);

	//场景ID获取gameserver,选择人数最小的      mapid会返回gs唯一id
	void GetGameServerByMapid(short int &serverid ,int64 &sceneID, Safe_Smart_Ptr<SvrItem> &gameSvr);

	//根据地图id获取最合适的场景id
	int64 GetSceneIDByMapID(short int mapid);
	//根据地图id和serverid获取最合适的场景id－－－－－－换线用
	int64 GetSceneIDByLine(short int mapid , int serverid);

	//场景id获取gameserver
	short int GetGameServerBySceneID(const int64 &sceneID);
	//地图id获取gameserver  和场景id
	short int GetGameServerByMapID(const int &mapID, int64 &sceneID);

	//根据副本地图id获取gameserverid
	short int GetGameServerIDBymapID(const short int &mapid);
	Safe_Smart_Ptr<SvrItem> GetGameServerBymapID(const short int &mapid ,int gameserverid = 0);
	//查看是否存在此场景
	bool IsHaveSceneID(const int64 &sceneid)
	{
		GUARD_READ(CRWLock, obj, &m_gsLock);
		map<int64, WORD>::iterator it = m_gameSvr.find(sceneid);
		if(it == m_gameSvr.end())
		{
			return false;
		}

		return true;
	}

	//删除副本id
	void DeleteSceneID(const int64 &sceneid)
	{
		GUARD_WRITE(CRWLock, obj, &m_gsLock);
		map<int64, WORD>::iterator it = m_gameSvr.find(sceneid);
		if(it != m_gameSvr.end())
		{
			m_gameSvr.erase(it);
		}
		obj.UnLock();

		//删除地图及地图玩家信息
		deleteMapAndPlayer(sceneid);
	}

	//根据角色id获取gs的频道id
	bool GetGSChannelByCharID(const int64 &charid, int &channel);
	//根绝角色id获取角色频道id
	bool GetClientChannelByCharID(const int64 &charid, int &channel);
	//根绝角色channel获取gs的频道id
	bool GetGSChannelByChannel(const int &channel, int & gsChannel);
	//根绝角色channel获取gs的频道id和玩家id
	bool GetGSChannelAndCharIDByChannel(const int &channel, int & gsChannel, int64 &charid);
	//给Login In 使用的接口，如果换线，timeout里面的数据才是最新的，所以用这个接口
	bool GetGSChannelAndCharIDByChannelEx(const int &channel, int & gsChannel, int64 &charid);

	bool IsPlayerLogin(const int64 &charid)
	{
		GUARD_READ(CRWLock, obj, &m_clientLock);
		map<int64, Safe_Smart_Ptr<sClientItem> >::iterator it =  m_idClient.find(charid);
		if(it != m_idClient.end())
		{
			return true;
		}

		return false;
	}
	//是否处于保护期，玩家登录状态为保护状态
	bool IsPlayerProtected(int64 charid)
	{
		GUARD_READ(CRWLock, obj, &m_clientLock);
		map<int64, Safe_Smart_Ptr<sClientItem> >::iterator it =  m_idClient.find(charid);
		if(it != m_idClient.end())
		{
			return false;
		}
		else
		{
			obj.UnLock();

			return m_timeout.IsInTimeoutList(charid);
		}
	}

	//�������
	void PlayerExit(const int64 &charid, bool flag, Safe_Smart_Ptr<Message> message = 0);
	void PlayerExit(const int &channel, bool flag);
	void PlayerExit(const int64 &charid, Safe_Smart_Ptr<Message> message = 0);
	void PlayerExitEx(const int64 &charid, Safe_Smart_Ptr<Message> message);

	//清除某个服的玩家
	void clearPlayerFromServer(WORD gsID);

	//清除某张地图的信息
	void deleteMapAndPlayer(int64 secneID)
	{
			GUARD_WRITE(CRWLock, obj, &m_gsIDLock);
			map<WORD, Safe_Smart_Ptr<SvrItem> >::iterator it =  m_gsIDSvr.begin();
			for(; it!=m_gsIDSvr.end(); ++it)
			{
				if(it->second.Get()==NULL)
					continue;

				map<int64, int>::iterator itMap = it->second->mapPlayer.find(secneID);
				if(itMap!=it->second->mapPlayer.end())
				{
					it->second->mapPlayer.erase(itMap);
				}
			}
	}

	void GetGameServerBygsID(short int gsID, Safe_Smart_Ptr<SvrItem> &gameSvr)
	{
		GUARD_READ(CRWLock, obj, &m_gsIDLock);
		map<WORD, Safe_Smart_Ptr<SvrItem> >::iterator it =  m_gsIDSvr.find(gsID);
		if(it != m_gsIDSvr.end())
		{
			gameSvr = it->second;
		}
	}

	int GetServerID()
	{
		return m_serverID;
	}
	void SetServerID(int id)
	{
		m_serverID = id;
	}

	ConItem *GetLoginServer()
	{
		return &m_loginServer;
	}

	ConItem *GetWorldServer()
	{
		return &m_worldServer;
	}

	int64 GetCharidByChannel(int channelid);
	void UpdateSceneidByChar(const int64 &charid,const int64 &sceneid, const int &gsid);

	int64 GetSceneidByChannel(int channelid);

	//只能发loginserver和worldserver
	void SendMessageToServer(unsigned int msgType, int type, unsigned int msgID, google::protobuf::Message *content)
	{
		short int rID = 0;
		unsigned char rType = 0;
		int channelID = 0;

		switch(type)
		{
		case eLoginServer:
			{
				rID = m_loginServer.remoteID;
				rType = m_loginServer.remoteType;
				channelID = m_loginServer.channelID;

				break;
			}
		case eWorldServer:
			{
				rID = m_worldServer.remoteID;
				rType = m_worldServer.remoteType;
				channelID = m_worldServer.channelID;

				break;
			}
		default:
			return;
		}

		Safe_Smart_Ptr<CommBaseOut::Message> newMessage = NEW CommBaseOut::Message(rID, rType, channelID);
		char str[MAX_RECV_MSG_SIZE] = {0};
		content->SerializePartialToArray(str, content->ByteSize());

		newMessage->SetMessageType(msgType);
		newMessage->SetMessageID(msgID);
		newMessage->SetLocalType(ServerConHandler::GetInstance()->GetLocalType());
		newMessage->SetContent(str, content->ByteSize());
		Message_Facade::Send(newMessage);
	}

	ConnTimeout & GetTimeOut()
	{
		return m_timeout;
	}

	Safe_Smart_Ptr<SvrItem> GetLeastGameServer();

	//得到当线玩家人数
	int GetGsPlayerNum(int serverid);
	//得到当线当图玩家人数
	int GetGsMapPlayerNum(int64 sceneid);

	// 获取所有分线的信息
	void GetAllGameSvrInfo(PlayerInfo::TotalBranchLineInfo& info);

private:
	ServerConHandler();

private:

	std::vector<Safe_Smart_Ptr<sClientItem> > m_client;     //socket �� client
	map<int64, Safe_Smart_Ptr<sClientItem> > m_idClient;    //charid �� client
	CRWLock m_clientMutex;		//玩家频道列表锁
	CRWLock m_clientLock;	//角色id索引列表锁
	map<int64, WORD> m_gameSvr;   //mapid   -  gsΨһid
	CRWLock m_gsLock;
	map<short int, vector<WORD> > m_copyMapSvr;   //������ͼid   -  gsΨһid
	CRWLock m_copyLock;
	map<WORD, Safe_Smart_Ptr<SvrItem> > m_gsIDSvr; // gsID   -   gameserver
	CRWLock m_gsIDLock;
	ConItem m_loginServer;
	ConItem m_worldServer;
	static ServerConHandler * m_instance;

	ConnTimeout m_timeout;
	short int m_localID;
	unsigned char m_localType;
	string m_ip;//�ṩ�ͻ������ӵ�ip
	short int m_port; //�ṩ�ͻ������ӵ�port
	int m_serverID;
};




#endif /* SERVERMANAGER_H_ */
