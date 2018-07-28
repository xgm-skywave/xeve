﻿//------------------------------------------------------------------------
// * @filename: GamePlayerActor.h
// *
// * @brief: 玩家扮演的角色
// *
// * @author: XGM
// * @date: 2018/05/18
//------------------------------------------------------------------------
#pragma once

#include <string>
#include <stdint.h>

class GamePlayer;

class GamePlayerActor
{
public:
	virtual ~GamePlayerActor() {}

	//------------------------------------------------------------------------
	// 获得玩家扮演的角色类型
	//------------------------------------------------------------------------
	virtual int32_t GetType() = 0;

	//------------------------------------------------------------------------
	// 进入游戏
	//------------------------------------------------------------------------
	virtual void EnterGame(GamePlayer* pPlayer) const {}

	//------------------------------------------------------------------------
	// 离开游戏
	//------------------------------------------------------------------------
	virtual void LeaveGame(GamePlayer* pPlayer) const {}
};
