﻿//------------------------------------------------------------------------
// * @filename: SessionStatistics.h
// *
// * @brief: 连接的消息统计
// *
// * @author: XGM
// * @date: 2018/02/26
//------------------------------------------------------------------------
#pragma once

#include <string>
#include <stdint.h>

class SessionStatistics
{
public:
	SessionStatistics() {}
	virtual ~SessionStatistics() {}

	//------------------------------------------------------------------------
	// 增加消息计数
	//------------------------------------------------------------------------
	virtual void AddMessageCount(uint32_t nMsgID, int32_t nMsgCount);

	//------------------------------------------------------------------------
	// 获得消息计数
	//------------------------------------------------------------------------
	virtual int32_t GetMessageCount(uint32_t nMsgID);

	//------------------------------------------------------------------------
	// 最后更新的时间
	//------------------------------------------------------------------------
	virtual int64_t GetLastTime();

	//------------------------------------------------------------------------
	// 获得内部状态信息
	//------------------------------------------------------------------------
	virtual std::string GetStatusInfo();

protected:
	// 消息计数
	int32_t m_nCount = 0;
	// 最后更新的时间
	int64_t m_nLastTime = 0;
};