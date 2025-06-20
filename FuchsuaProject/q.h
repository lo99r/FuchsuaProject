#pragma once
#ifndef q_h
#define q_h
#define Q_version "1.0"
#define Q_Display_Number "112-118-189-001"

#include<stdio.h>
#include<windows.h>
#include<locale.h>

#include<process.h>

#pragma comment (lib, "winmm.lib")    //음악
#include <mmsystem.h>                //음악
#include <Digitalv.h>                //음악

//엔딩음악: wet hands
//인트로음악: Mice on Venus
//메인배경음악: Haunt Muskie
//스진음악: aria math
//위기속 평화: Dreiton
//폐허 Dandt Sabahan Dabsahi Hari1be: TASSWELL\
//디su토피야&아쿠아re움: Axolotl
//침수차: Dragon Fish
//탐색: Shuni ji
//절망: Concrete Halls
//위기: Dead Voxel
//회복: Warmth
//최후의 전투: BALLAD of the CatS
//작당모의: Rubedo
//보스 성에 가까워진: So Below

//#pragma comment (lib, "gdiplus.lib")
//#include<gdiPlus.h>

#include"v.h"
#include"binary.h"

//extern UINT16 memory[4096];

extern int decount;
extern int in_exit;
extern int do_exit;
extern int count;

//int count = 0;
//int do_exit = 0;

//int in_exit = 0;

static inline unsigned _stdcall Keyboard_loop(void* arg) { //Xïredï
	while (1) { //Banbogmun
		/**?
		Bon Xïredïë ëmë: {
		    Bon Xïredï silsigan-ïrlo Kibodï nullimïl gamci8haya Kaundïlïl senïn Xïredï-ida.
		}
		*/
		count = 0;

		for (int vk = 1; vk < 256; vk++) {
			SHORT state = GetAsyncKeyState(vk);
			if (state & 0x8000) {
				count++;
			}
		}

		if (do_exit) {
			break;
		}
		Sleep(200);
	}
	return 0;
}

extern SHORT KeyList[7];

extern UINT16 memory[4096];

static inline unsigned _stdcall Keyupdate_loop(void* arg) {
	int iii = 0;
	while (in_exit) {
		*(memory + *(memory + 9) + iii) = *(KeyList + iii)
			;
		iii++
			;
	}
}

static inline UINT16 QStart(UINT16 QStartSetup) {
	if (QStartSetup == 0x0000) {
		_beginthreadex(NULL, 0, Keyboard_loop, 0, 0, NULL); //Xïredï silhäñ
		_beginthreadex(NULL, 0, Keyupdate_loop, 0, 0, NULL);
	}
	else if (QStartSetup == 0x0001) {
		//ready for Display

	}
}

//Planin harab:
/*
** Intereptin **
- zZzZz
- l-Kiibordin l-Intereptin
    키보드 실시간 캡처 기능: 메모리 의사 표시 맵핑=
*/

#endif
// FuchsuaProject QDisplay 112-118-189-001 1.0
//(c) FuchsuaProject 182
/*
오후 5:46에 빌드를 시작함...
========== 빌드: 0개 성공, 0개 실패, 1개 최신 상태, 0개 건너뜀 ==========
========== 빌드이(가) 오후 5:46에 완료되었으며, 00.046 초이(가) 걸림 ==========

*/