#include "DxLib.h"
#define GetMX 480
#define GetMY 240
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	DxLib_Init();	// DXライブラリ初期化処理
	ChangeWindowMode(TRUE);
	DrawBox(60, 120, 480, 240, GetColor(128, 64, 64), TRUE);
	WaitKey();	// キー入力待ち
	
	DxLib_End();	// DXライブラリ終了処理
	return 0;
	/* 入力が終わった人は以下を
	WaitKey();の一つ前に入力してみる。

	DrawBox(60,120,480,240,GetColor(128,64,64),TRUE);
	*/
}
