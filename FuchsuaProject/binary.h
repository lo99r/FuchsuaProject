#pragma once
#ifndef binary_h
#define binary_h

#include"version.h"

#define da 1

#define _CRT_SECURE_NO_WARNINGS

//made in china

#include<stdio.h>//include "stdio.h"
#include<stdlib.h>
#include<conio.h>//include "conio.h"
//#include<stdlib.h>//include "stdlib.h"
#include<math.h>//include "math.h"
#include<string.h>//include "string.h"
#include<windows.h>//include "windows.h"
#include<process.h>
#include<io.h>
#include<time.h>
#include<locale.h>
//#include<Skout.h>
//#include"v.h"

//
#pragma comment (lib, "winmm.lib")    //음악
#include <mmsystem.h>                //음악
#include <Digitalv.h>                //음악

#endif

#ifdef def_binary_helper

#define clss system("cls")
#define colors(backer, downer) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (backer * 16) + downer)
#define darkmodes system("0f")
#define whitemodes system("f0")
#define token(kokk) printf("%02x", kokk)
//#define typers 0x18//1319
#define curposgens(x, y) SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), {(short)x, (short)y})
#define ands(hexbinn) (hexbinn == 0) ? 0 : ((hexbinn == 1) ? 0 : ((hexbinn == 2) ? 0 : 1)))
#define ors(hexbinn) (hexbinn == 0) ? 0 : ((hexbinn == 1) ? 1 : ((hexbinn == 2) ? 1 : 1)))
#define threads(toroop) _beginthreadex(NULL, 0, toroop, 0, 0, NULL)
#define LString(x) L##x
#define FIE ;
#define start {
#define theEnd }
#define lineQ ┌
#define lineE ┐
#define lineZ └
#define lineC ┘
#define lineW ─
#define lineA │
#define lineD lineA
#define lineX lineW
#define lineAW ├
#define lineWA ┬
#define lineDW ┤
#define linwWD ┴
#define jesusCrist ┼
//#define ssang "
#define line2 f(x) fputc('#x')
//fputc(a, stdout)

// ─│┌┐┘└├┬┤┴┼
#endif

#ifndef seoneon
typedef enum {NOCURSOR, SOLIDCURSOR, NOMALCURSOR} CURSOR_TYPE;
#define clrscr() system("cls");
void gotoxy(int x, int y);
int wherex();
int wherey();
void setcursortype(CURSOR_TYPE c);
#define delay(n) Sleep(n)
#define _delay(n) Sleep(n * 1000)
#define randomize srand((unsigned)time(NULL))
#define random(n) (rand() % (n))
#ifndef jeong_eui
void gotoxy(int x, int y) {
	COORD Cur;
	Cur.X = x;
	Cur.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	//
}
int wherex() {
	CONSOLE_SCREEN_BUFFER_INFO cdm_ConsoleBufferInfo;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cdm_ConsoleBufferInfo);
	return cdm_ConsoleBufferInfo.dwCursorPosition.X;
}
int wherey() {
	CONSOLE_SCREEN_BUFFER_INFO cdm_ConsoleBufferInfo;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cdm_ConsoleBufferInfo);
	return cdm_ConsoleBufferInfo.dwCursorPosition.Y;
}
void setcursortype(CURSOR_TYPE c) {
	CONSOLE_CURSOR_INFO CurInfo;
	switch (c) {
	case NOCURSOR:
		CurInfo.dwSize = 1;
		CurInfo.bVisible = FALSE;
		break;
	case SOLIDCURSOR:
		CurInfo.dwSize = 100;
		CurInfo.bVisible = TRUE;
		break;
	case NOMALCURSOR:
		CurInfo.dwSize = 20;
		CurInfo.bVisible = TRUE;
		break;
		SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &CurInfo);
	}
}
#endif//001
#endif

//#define q_io 0

#ifndef NO_BINARY
#define NO_BINARY
#ifdef q_io
#if q_io == 0
#define print(n) wprintf(L"%s", n)
#define input(n) fgetws(n, 256, stdin);size_t len = wcslen(str);if(len > 0 && str[len - 1] == L'\n'){str[len - 1] = L'\0'}
#elif q_io == 1
#define print(n) q_output(n)
#define input(n) q_input(n)
#include<q_io.h>
#else
#error q_io는 0과 1입니다.
#endif
#else
#define q_io 0
#endif

UINT16 memory[4096] = { 0, };
UINT16 stack1_Count = 0;
UINT16 stack2_Count = 0;
UINT16 stack3_Count = 0;

UINT16 cdmb_Main();
UINT16 cdmb_Memory();
UINT16 cdmb_Parsing();
UINT16 cdmb_Command(UINT16* dPoint);
UINT16 cdmb_Push(UINT16 hPoint, UINT16* hCount, UINT16 _16bit);
UINT16 cdmb_Error(UINT16 rErrorCodes);
UINT16 cdmb_Pop(UINT16 pPoint, UINT16* pCount);

UINT16 cdmb_Main() {
	if(q_io == 0)
	{
		setlocale(LC_ALL, "");
	}
	UINT16 cdmmb_t_1 = cdmb_Memory();
	if (cdmmb_t_1 == 0x41) {
		return 0x41;
	}
	else {
		cdmb_Parsing();
	}
}

UINT16 cdmb_Memory() {
	FILE* cdm_t_WFILE1 = _wfopen(L"StartMemory", L"rb, ccs=UTF-16LE");
	if (!cdm_t_WFILE1) {
		return 0x41;
	}
	fread(&memory[16], sizeof(UINT16), 256, cdm_t_WFILE1);
}
UINT16 cdmb_CommandFuncReturnen = 0x0;
UINT16 cdmb_Parsing() {
	UINT16 cdm_t_MEMORYPOINTER = 0;
	cdm_t_MEMORYPOINTER = memory[cdm_t_MEMORYPOINTER];
	while(1)
	{
		cdmb_CommandFuncReturnen = cdmb_Command(&cdm_t_MEMORYPOINTER);//y
		//
		if (cdmb_CommandFuncReturnen != 0) {
			break;
		}
	}
	//
}
//todo: 바이트 코드를 구현하기
UINT16 cdmb_Command(UINT16* dPoint) {
	if (memory[*dPoint] == 0x0000) { //push
		//s
		switch (memory[*dPoint + 1]) {
		case 0x0001:
			cdmb_Push(2433, &stack1_Count, memory[*dPoint + 2]);
			break;
		case 0x0002:
			cdmb_Push(2689, &stack2_Count, memory[*dPoint + 2]);
			break;
		case 0x0003:
			cdmb_Push(2945, &stack3_Count, memory[*dPoint + 2]);// )
			break;
		default:
			cdmb_Error(0x0100);
			break;
		}
		*dPoint += 3;
	}
	else if (memory[*dPoint] == 0x0001) { //pop
		switch (memory[*dPoint + 1]) {
		case 0x0001:
			cdmb_Pop(2433, &stack1_Count);
			break;
		case 0x0002:
			cdmb_Pop(2689, &stack2_Count);
			break;
		case 0x0003:
			cdmb_Pop(2945, &stack3_Count);
			break;
		default:
			cdmb_Error(0x0101);
			break;
		}
	}
}

UINT16 cdmb_Push(UINT16 hPoint, UINT16* hCount, UINT16 _16bit) {
	memory[hPoint + *hCount] = _16bit;
	*hCount++;
	return 0;
}

UINT16 cdmb_Error(UINT16 rErrorCodes) {
	memory[1] = rErrorCodes;
	return 0;
}

UINT16 cdmb_Pop(UINT16 pPoint, UINT16* pCount) {
	//memory[]
	*pCount--;
	return 0;
}

#endif //NO_BANARY