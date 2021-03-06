﻿//------------------------------------------------------------------------
// * @filename: Frame.h
// *
// * @brief: 帧
// *
// * @author: XGM
// * @date: 2019/01/04
//------------------------------------------------------------------------
#pragma once

#include <stdint.h>

class FrameRoom;

class Frame
{
public:
	virtual ~Frame() {}

	//------------------------------------------------------------------------
	// 初始化
	//------------------------------------------------------------------------
	virtual void Init(int32_t nFrameID, FrameRoom* pFrameRoom) = 0;

	//------------------------------------------------------------------------
	// 是不是关键帧
	//------------------------------------------------------------------------
	virtual bool IsKeyFrame() = 0;

	//------------------------------------------------------------------------
	// 帧编号
	//------------------------------------------------------------------------
	virtual int32_t GetFrameID() = 0;

	//------------------------------------------------------------------------
	// 帧同步房间
	//------------------------------------------------------------------------
	virtual FrameRoom* GetFrameRoom() = 0;

	//------------------------------------------------------------------------
	// 接收数据
	//------------------------------------------------------------------------
	virtual void Recv(int64_t nPlayerGUID, void* pFrameData) = 0;

	//------------------------------------------------------------------------
	// 发送给玩家
	//------------------------------------------------------------------------
	virtual void Send(int64_t nPlayerGUID) = 0;

	//------------------------------------------------------------------------
	// 广播数据
	//------------------------------------------------------------------------
	virtual void Broadcast() = 0;

	//------------------------------------------------------------------------
	// 帧结束
	//------------------------------------------------------------------------
	virtual void OnFinish(int32_t nNextFrameID) = 0;
};
