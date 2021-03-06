﻿#ifndef __GROUP_MAIL_MGR_H__
#define __GROUP_MAIL_MGR_H__
#include "../ServerData/MailData.h"
#include "DBInterface/CppMysql.h"

class CGroupMailMgr
{
	CGroupMailMgr();
	~CGroupMailMgr();
public:
	static CGroupMailMgr* GetInstancePtr();

	BOOL  SendGroupMail(GroupMailDataObject* pGroupMail);

	BOOL  LoadGroupMailData(CppMySQL3DB& tDBConnection);

public:
	std::map<UINT64, GroupMailDataObject*> m_mapGroupMailData;



};
#endif //__GROUP_MAIL_MGR_H__