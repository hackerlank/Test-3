/*
 * GoodsManager.h
 *
 *  Created on: 2014年4月17日
 *      Author: root
 */

#ifndef GOODSMANAGER_H_
#define GOODSMANAGER_H_

#include "Network/MessageHandler.h"
#include "MsgDefineMacro.h"
#include "ServerMsgDefine.h"

using namespace CommBaseOut;


class GoodsManager : public Message_Handler, public Request_Handler, public Ack_Handler
{
public:
	~GoodsManager();

	static GoodsManager *GetInstance()
	{
		if(m_instance == 0)
		{
			m_instance = new GoodsManager();
		}

		return m_instance;
	}

	DEF_MSG_SIMPLE_DECLARE_FUN_H(MSG_SIM_C2CT_SORTBACKPACK);
	DEF_MSG_SIMPLE_DECLARE_FUN_H(MSG_SIM_GM2GT_SAVEGOODS);
	DEF_MSG_SIMPLE_DECLARE_FUN_H(MSG_SIM_GT2GM_ADDBACKPACKSIZE);
	DEF_MSG_REQUEST_DECLARE_FUN_H(MSG_REQ_C2CT_MOVEGOODS);
	DEF_MSG_REQUEST_DECLARE_FUN_H(MSG_REQ_C2CT_DISCARDGOODS);
	DEF_MSG_REQUEST_DECLARE_FUN_H(MSG_REQ_C2CT_ADDBACKPACKSIZE);
	DEF_MSG_REQUEST_DECLARE_FUN_H(MSG_REQ_C2GT_SPLITGOODS);

	DEF_MSG_REQUEST_DECLARE_FUN_H(MSG_REQ_C2CT_USEGGOODS);

	DEF_MSG_REQUEST_DECLARE_FUN_H(MSG_REQ_GT2GM_ADDBACKPACKSIZE);
	DEF_MSG_REQUEST_DECLARE_FUN_H(MSG_REQ_C2CT_MOVEQUICKSECTOR);
	DEF_MSG_REQUEST_DECLARE_FUN_H(MSG_REQ_C2GT_STONEDAADEL);
	DEF_MSG_REQUEST_DECLARE_FUN_H(MSG_REQ_C2GT_STONECREATE);

	DEF_MSG_REQUEST_DECLARE_FUN_H(MSG_REQ_C2GT_WEAREQUIP);
	DEF_MSG_REQUEST_DECLARE_FUN_H(MSG_REQ_C2GT_STRENGTHEQUIP);
	DEF_MSG_ACK_DECLARE_FUN_H(MSG_REQ_GT2GM_WEAREQUIP);

	DEF_MSG_ACK_DECLARE_FUN_H(MSG_REQ_GT2GM_USEGOODS);

	DEF_MSG_ACK_DECLARE_FUN_H(MSG_REQ_GT2GM_ADDBACKPACKSIZE);
	DEF_MSG_ACK_DECLARE_FUN_H(MSG_REQ_GT2GM_MOVEQUICKSECTOR);
	DEF_MSG_ACK_DECLARE_FUN_H(MSG_REQ_GT2GM_STONEDAADEL);
	DEF_MSG_ACK_DECLARE_FUN_H(MSG_REQ_GT2GM_STONECREATE);
	DEF_MSG_ACK_DECLARE_FUN_H(MSG_REQ_GT2GM_STRENGTHEQUIP);
	DEF_MSG_ACK_DECLARE_FUN_H(MSG_REQ_GT2GM_MOVEGOODS);
	//装备洗练
	DEF_MSG_REQUEST_DECLARE_FUN_H(MSG_REQ_C2CT_REFINE);
	DEF_MSG_ACK_DECLARE_FUN_H(MSG_REQ_GT2GM_REFINE);

	//确认洗练
	DEF_MSG_REQUEST_DECLARE_FUN_H(MSG_REQ_C2CT_AFFIRMREFINE);
	DEF_MSG_ACK_DECLARE_FUN_H(MSG_REQ_GT2GM_AFFIRMREFINE);

	DEF_MSG_ACK_DECLARE_FUN_H(MSG_REQ_GT2GM_SPLITGOODS);
	DEF_MSG_ACK_DECLARE_FUN_H(MSG_REQ_GT2GM_DISCARDGOODS);

	virtual void Handle_Message(Safe_Smart_Ptr<Message> &message);
	virtual void Handle_Request(Safe_Smart_Ptr<Message> &message);
	virtual void Handle_Ack(Safe_Smart_Ptr<Message> &message);

	void DestroyInstance()
	{
		if(m_instance)
		{
			delete m_instance;
			m_instance = 0;
		}
	}

private:
	GoodsManager();

private:
	static GoodsManager * m_instance;

};


#endif /* GOODSMANAGER_H_ */
