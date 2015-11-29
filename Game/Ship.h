//==============================================================================
//	Ship.h
//		�D�𐧌䂷��N���X
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

	int graphID;//�摜��ID��\��
	Word words;//�ǂ݂��܂���P��
	int speed;//�D�̈ړ����鑬��
	int position;//�D�̌��ݒn
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