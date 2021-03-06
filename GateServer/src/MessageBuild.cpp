/*
 * MessageBuild.cpp
 *
 *  Created on: 2013-9-20
 *      Author: helh
 */
#include "MessageBuild.h"
#include "define.h"

Safe_Smart_Ptr<CommBaseOut::Message> build_message(int messageID, Safe_Smart_Ptr<CommBaseOut::Message> &message, google::protobuf::Message *content, int messageType, int timeOut)
{
	string tempStr;
	CommBaseOut::Message *newMessage = NEW CommBaseOut::Message(message);
	content->SerializePartialToString(&tempStr);

	newMessage->SetMessageType(messageType);
	newMessage->SetTimeout(timeOut);
	newMessage->SetMessageID(messageID);
	newMessage->SetContent(tempStr.c_str(), tempStr.size());

	return newMessage;
}

Safe_Smart_Ptr<CommBaseOut::Message> build_message(int messageID, google::protobuf::Message *content, SvrItem *handler, int messageType, int timeOut)
{
	string tempStr;
	CommBaseOut::Message *newMessage = NEW CommBaseOut::Message(handler->remoteID, handler->remoteType, handler->channelID);
	content->SerializePartialToString(&tempStr);

	newMessage->SetMessageType(messageType);
	newMessage->SetTimeout(timeOut);
	newMessage->SetMessageID(messageID);
	newMessage->SetLocalType(ServerConHandler::GetInstance()->GetLocalType());
	newMessage->SetContent(tempStr.c_str(), tempStr.size());

	return newMessage;
}

Safe_Smart_Ptr<CommBaseOut::Message> build_message(int messageID, google::protobuf::Message *content, ConItem *handler, int messageType, int timeOut)
{
	string tempStr;
	CommBaseOut::Message *newMessage = NEW CommBaseOut::Message(handler->remoteID, handler->remoteType, handler->channelID);
	content->SerializePartialToString(&tempStr);

	newMessage->SetMessageType(messageType);
	newMessage->SetTimeout(timeOut);
	newMessage->SetMessageID(messageID);
	newMessage->SetLocalType(ServerConHandler::GetInstance()->GetLocalType());
	newMessage->SetContent(tempStr.c_str(), tempStr.size());

	return newMessage;
}

Safe_Smart_Ptr<CommBaseOut::Message> build_message(int messageID, google::protobuf::Message *content, sClientItem *handler, int messageType, int timeOut)
{
	string tempStr;
	CommBaseOut::Message *newMessage = NEW CommBaseOut::Message(0, 0, handler->channelID);
	content->SerializePartialToString(&tempStr);

	newMessage->SetMessageType(messageType);
	newMessage->SetTimeout(timeOut);
	newMessage->SetMessageID(messageID);
	newMessage->SetLocalType(ServerConHandler::GetInstance()->GetLocalType());
	newMessage->SetContent(tempStr.c_str(), tempStr.size());

	return newMessage;
}

Safe_Smart_Ptr<CommBaseOut::Message> build_message(int messageID, char *content, int len, SvrItem *handler, int messageType, int timeOut)
{
	CommBaseOut::Message *newMessage = NEW CommBaseOut::Message(handler->remoteID, handler->remoteType, handler->channelID);

	newMessage->SetMessageType(messageType);
	newMessage->SetTimeout(timeOut);
	newMessage->SetMessageID(messageID);
	newMessage->SetLocalType(ServerConHandler::GetInstance()->GetLocalType());
	newMessage->SetContent(content, len);

	return newMessage;
}

Safe_Smart_Ptr<CommBaseOut::Message> build_message(int messageID, string &content, sClientItem *handler, int messageType, int timeOut)
{
	CommBaseOut::Message *newMessage = NEW CommBaseOut::Message(0, 0, handler->channelID);

	newMessage->SetMessageType(messageType);
	newMessage->SetTimeout(timeOut);
	newMessage->SetMessageID(messageID);
	newMessage->SetLocalType(ServerConHandler::GetInstance()->GetLocalType());
	newMessage->SetContent(content.c_str(), content.size());

	return newMessage;
}

Safe_Smart_Ptr<CommBaseOut::Message> build_message(int messageID, google::protobuf::Message *content, int channel, int messageType, int timeOut)
{
	string tempStr;
	CommBaseOut::Message *newMessage = NEW CommBaseOut::Message(channel);
	content->SerializePartialToString(&tempStr);

	newMessage->SetMessageType(messageType);
	newMessage->SetTimeout(timeOut);
	newMessage->SetMessageID(messageID);
	newMessage->SetLocalType(ServerConHandler::GetInstance()->GetLocalType());
	newMessage->SetContent(tempStr.c_str(), tempStr.size());

	return newMessage;
}

Safe_Smart_Ptr<CommBaseOut::Message> build_message(int messageID, string &content, int channel, int messageType, int timeOut)
{
	CommBaseOut::Message *newMessage = NEW CommBaseOut::Message(channel);

	newMessage->SetMessageType(messageType);
	newMessage->SetTimeout(timeOut);
	newMessage->SetMessageID(messageID);
	newMessage->SetLocalType(ServerConHandler::GetInstance()->GetLocalType());
	newMessage->SetContent(content.c_str(), content.size());

	return newMessage;
}

Safe_Smart_Ptr<CommBaseOut::Message> build_message(int messageID, Safe_Smart_Ptr<CommBaseOut::Message> &message, int channel, int messageType, int timeOut)
{
	CommBaseOut::Message *newMessage = NEW CommBaseOut::Message(channel);

	newMessage->SetMessageType(messageType);
	newMessage->SetTimeout(timeOut);
	newMessage->SetMessageID(messageID);
	newMessage->SetLocalType(message->GetLocalType());
	newMessage->SetContent(message->GetContent(), message->GetLength());

	return newMessage;
}
