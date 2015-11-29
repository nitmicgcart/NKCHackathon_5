//==============================================================================
//	Ship.h
//		�D�𐧌䂷��N���X
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

	int graphID;//�摜��ID��\��
	std::string words;//�ǂ݂��܂���P��
	int speed;//�D�̈ړ����鑬��
	int position;//�D�̌��ݒn
};






#endif
// EOF