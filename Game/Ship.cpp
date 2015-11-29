

//--------------------------------------
// インクルード
#include "Ship.h"
//--------------------------------------
// 変数宣言

//--------------------------------------
// 定数宣言

//==============================================================================
//	Class
//		Info
//==============================================================================

//--------------------------------------
// FncName  Ship::Init()
//		Info 船の初期化処理を行う。画像のID、読みこませる単語、船の移動する速さを設定する
int Ship::Init(int _graphID, std::string _words, int _speed) {
	graphID = _graphID;
	words = _words;
	speed = _speed;
	position = 0;

	return 0;
}

//--------------------------------------
// FncName  Ship::Update()
//	Info  船の移動処理を行う。ただ単にpositionを加算するだけ
int Ship::Update() {
	position += speed;
	if (position > 600) {
		//入力が間に合わなかった
	}
	return 0;
}


//--------------------------------------
// FncName  Ship::Draw()
//	Info 船の描画処理を行う
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
// Info  船のデータの開放処理
int Ship::Release() {

}












// EOF