#pragma once
#ifndef q_h
#define q_h
#define Q_version "1.0"
#define Q_Display_Number "112-118-189-001"

#include<stdio.h>
#include<windows.h>
#include<locale.h>

#pragma comment (lib, "winmm.lib")    //음악
#include <mmsystem.h>                //음악
#include <Digitalv.h>                //음악

#pragma comment (lib, "gdiplus.lib")
#include<gdiPlus.h>

extern UINT16 memory[4096];

inline UINT16 QStart(UINT16 QStartSetup) {
	if (QStartSetup == 0x0000) {

	}
}

#endif
// FuchsuaProject QDisplay 112-118-189-001 1.0
//(c) FuchsuaProject 182
/*
오후 5:46에 빌드를 시작함...
========== 빌드: 0개 성공, 0개 실패, 1개 최신 상태, 0개 건너뜀 ==========
========== 빌드이(가) 오후 5:46에 완료되었으며, 00.046 초이(가) 걸림 ==========

*/