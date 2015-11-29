//==============================================================================
//	Ship.h
//		船を制御するクラス
//==============================================================================
#pragma once
#ifndef ___SHIP_HEADER___
#define ___SHIP_HEADER___

#include "ObjBase.h"
#include <Siv3D.hpp>
#include "Word.h"
class Ship : public ObjBase {

public:
	int Init();
	int Init(int _graphID, int _speed);
	int Update();
	int Draw();
	int Release();

	int graphID;//画像のIDを表す
	Word words;//読みこませる単語
	int speed;//船の移動する速さ
	int position;//船の現在地
};


//class Ship : public ObjBase {
//
//public:
//	int Init();
//	int Update();
//	int Draw();
//	int Release();
//
//};


#endif
// EOF