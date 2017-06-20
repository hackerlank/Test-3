/*
 * ServiceMain.h
 *
 *  Created on: 2013��9��12��
 *      Author: helh
 */

#ifndef SERVICEMAIN_H_
#define SERVICEMAIN_H_

#include "ServerConfig.h"

using namespace CommBaseOut;

class CServiceMain
{
public:
	CServiceMain();
	~CServiceMain();

	int Init();

	int InitFile();

	void InitInstance();

	void UnInit();

	void Start();

	static void Stop(int signal);

protected:


private:
	CServerConf m_conf;
};

#endif /* SERVICEMAIN_H_ */
