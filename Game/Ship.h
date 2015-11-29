//==============================================================================
//	Ship.h
//		船を制御するクラス
//==============================================================================
#pragma once
#ifndef ___SHIP_HEADER___
#define ___SHIP_HEADER___

#include"ObjBase.h"
#include <Siv3D.hpp>

class Ship : public ObjBase {

public:
	int Init(int _graphID, std::string _words, int _speed);
	int Update();
	int Draw();
	int Release();

	int graphID;//画像のIDを表す
	std::string words;//読みこませる単語
	int speed;//船の移動する速さ
	int position;//船の現在地
};






#endif
// EOF