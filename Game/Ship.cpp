

//--------------------------------------
// �C���N���[�h
#include "Ship.h"
//--------------------------------------
// �ϐ��錾

//--------------------------------------
// �萔�錾

//==============================================================================
//	Class
//		Info
//==============================================================================

//--------------------------------------
// FncName  Ship::Init()
//		Info �D�̏������������s���B�摜��ID�A�ǂ݂��܂���P��A�D�̈ړ����鑬����ݒ肷��
int Ship::Init(int _graphID, std::string _words, int _speed) {
	graphID = _graphID;
	words = _words;
	speed = _speed;
	position = 0;

	return 0;
}

//--------------------------------------
// FncName  Ship::Update()
//	Info  �D�̈ړ��������s���B�����P��position�����Z���邾��
int Ship::Update() {
	position += speed;
	if (position > 600) {
		//���͂��Ԃɍ���Ȃ�����
	}
	return 0;
}


//--------------------------------------
// FncName  Ship::Draw()
//	Info �D�̕`�揈�����s��
int Ship::Draw() {
	switch (Ship::graphID){
		case 0:
			TextureAsset(L"ship").draw(position,30);
			break;
		case 1:
			TextureAsset(L"sub").draw(position,30);
			break;
		default:
			break;
	}
}


//--------------------------------------
// FncName  Ship::Release()
// Info  �D�̃f�[�^�̊J������
int Ship::Release() {

}












// EOF