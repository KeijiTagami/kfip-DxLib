#include "DxLib.h"
#define GetMX 480
#define GetMY 240
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	{
	if (ChangeWindowMode(TRUE) != 0)
		return -1;
	if (DxLib_Init() != 0)
		return -1;
	if (SetDrawScreen(DX_SCREEN_BACK) != 0) {
		DxLib_End();
		return -1;
	}
	}
	//DXライブラリ初期化過程
	
	
	while (ProcessMessage()==0 && ClearDrawScreen()==0 &&  ScreenFlip()==0) {
		//1fごとに繰り返す処理
	}
	
	DxLib_End();	// DXライブラリ終了処理
	return 0;
	
}
