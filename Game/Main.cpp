﻿
# include <Siv3D.hpp>
#include "ObjBase.h"
#include "Ship.h"
#include <Windows.h>

std::list<ObjBase*> ObjBase::ObjectList;
int Score;
int Time;


void Main()
{
	// const Font font(30);
	// font(L"ようこそ、Siv3D の世界へ！").draw();
	// Circle(Mouse::Pos(), 50).draw({ 255, 0, 0, 127 });

	TextureAsset::Register(L"ship", L"NKCHackathon_5\Game\Image\ship.png");
	TextureAsset::Register(L"sub" , L"NKCHackathon_5\Game\Image\i401.png");
	TextureAsset::Register(L"haikei", L"NKCHackathon_5\Game\Image\lighth.png" );
	TextureAsset::Register(L"toudai", L"NKCHackathon_5\Game\Image\lighthouse.png");

	while (System::Update())
	{
		if (GetAsyncKeyState(VK_ESCAPE)) { break; }
		if (Input::KeySpace.clicked) {
			Ship::Init(1,L"あいう",3);

			Ship ship = new Ship();
		}

		ObjBase::AllUpdateAndDraw();
	}
	ObjBase::DeleteAll();
}
