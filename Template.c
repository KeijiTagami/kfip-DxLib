#include "DxLib.h"
#define GetMX 480
#define GetMY 240
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	DxLib_Init();	// DXライブラリ初期化処理
	ChangeWindowMode(TRUE);
	WaitKey();	// キー入力待ち
	DxLib_End();	// DXライブラリ終了処理
	return 0;
}
