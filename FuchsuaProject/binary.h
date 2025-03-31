/*
 ################
 # STACK의 예제 #
 ################
 └ ###############################################
 │ # 1 # // {                                    #
 │ # 2 #	스택 사용에 대한 예제                 #
 │ # 3 #	현재 스택은 다음과 같이 비어있습니다. #
 │ # 4 # }                                       #
 │ #                                             #
 │ ###############################################
 │ 
 └ #########
 │ #       #
 │ # #   # #
 │ # #   # #
 │ # #   # #
 │ # #   # #
 │ # #   # #
 │ # ##### #
 │ #       #
 │ #########
 │ 
 └ #############################################
 │ # 1 # // {                                  #
 │ # 2 #	여기에서 스택에 2를 푸쉬하겠습니다. #
 │ # 3 # }                                     #
 │ # 4 $                                       #
 │ # 5 # PUSH 1 2                              #
 │ #                                           #
 │ #############################################
 │ 
 └ #########
    #       #
	# #   # #
	# #   # #
	# #   # #
	# ##### #
	# # 2 # #
	# ##### #
	#       #
	#########
*/
#pragma once
#ifndef binary_hh
#define binary_hh

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
#ifndef binary_h
#define binary_h
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
inline void gotoxy(int x, int y);
inline int wherex();
inline int wherey();
inline void setcursortype(CURSOR_TYPE c);
#define delay(n) Sleep(n)
#define _delay(n) Sleep(n * 1000)
#define randomize srand((unsigned)time(NULL))
#define random(n) (rand() % (n))
#ifndef jeong_eui
inline void gotoxy(int x, int y) {
	COORD Cur;
	Cur.X = x;
	Cur.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	//
}
inline int wherex() {
	CONSOLE_SCREEN_BUFFER_INFO cdm_ConsoleBufferInfo;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cdm_ConsoleBufferInfo);
	return cdm_ConsoleBufferInfo.dwCursorPosition.X;
}
inline int wherey() {
	CONSOLE_SCREEN_BUFFER_INFO cdm_ConsoleBufferInfo;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cdm_ConsoleBufferInfo);
	return cdm_ConsoleBufferInfo.dwCursorPosition.Y;
}
inline void setcursortype(CURSOR_TYPE c) {
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

//이 위는 알아서 분석하시고
//이 아래는 많이 수정하는 곳입니다.

static UINT16 memory[4096] = { 0, }; //본 프로그램의 메모리입니다.
static UINT16 stack1_Count = 0; //본 프로그램의 기본 스택의 카운트입니다.
/*
stackx_Count은(는) 본 프로그램의 유일한 memory에 속하지 않는 변수들입니다. 이 변수는 스택에 값이 몇개가 쌓여있는지 나타냅니다.

 #######################
 # STACK이(가) 뭘까요? #
 #######################

  stack은 후입선출을 하는 하나의 저장공간입니다. 아래의 그림을 보시죠.

  #   #
  #####
  # 1 #
  #####
  # 2 #
  #####

  stack에 2, 1 순서로 넣었습니다. 스,택은 마지막에 넣은 값만 접근할 수 있습니다.
*/
static UINT16 stack2_Count = 0;
static UINT16 stack3_Count = 0;

/*
 ###################
 # memory의 예약도 #
 ###################
 #
 ###################################################################################
 # 0: 여기는 제일 처음에 있는 메모리 위치이며, 여기에서 저장된값은 위치정보입니다. #
 #    해당위치로 점프하고 그 위치에서 스크립트를 실행합니다.                       #
 ###################################################################################
 # 1: 이 곳은 스크립트 실행도중 오류가 나면 오류코드를 반환합니다.                 #
 ###################################################################################
 # 16-271: 이 곳은 프로그람을 실행한후 제일 먼저 실행하는 곳입니다.                #
 ###################################################################################
 # 272-2431: 이 곳은 출력버퍼 입니다.                                              #
 ###################################################################################
 # 2432: 이 곳은 커서의 위치입니다.                                                #
 ###################################################################################
 # 2433-2868: 첫 번째 스택의 저장입니다.                                           #
 ###################################################################################
 # 2869-2944: 두 번째 스택의 저장입니다.                                           #
 ###################################################################################
 # 2945-3200: 세 번째 스택의 저장입니다.                                           #
 ###################################################################################

 * 주의!!! {
	1. 3201 부턴 자율공간입니다.
 }

 요아니뽀뽀 이름 박제
*/

inline UINT16 cdmb_Main(); //cdmb를 '실행'이라는거를 가능하게 해주는 cdmb 그 자체 
inline UINT16 cdmb_Memory(); // cdmb에서 리틀엔디언 기반으로 처음 실행할 코드를 불러와주는 곳
//
inline UINT16 cdmb_Parsing(); // 커맨드의 메모리 포인터 값을 도와줌
inline UINT16 cdmb_Command(UINT16* dPoint); // 커맨드의 메인 실행 함수

//여기서 부터는 선언이 아닌 정의에서 주석을 달겠습니다.
inline UINT16 cdmb_Push(UINT16 hPoint, UINT16* hCount, UINT16 _16bit);
inline UINT16 cdmb_Error(UINT16 rErrorCodes);
inline UINT16 cdmb_Pop(UINT16 pPoint, UINT16* pCount);
inline UINT16 cdmb_Safe(UINT16 ePoint, UINT16 eCount, UINT16 ePushTheMemory);
inline UINT16 cdmb_Load(UINT16 dPoint, UINT16* dCount, UINT16 dLoadTheMemory);

inline UINT16 cdmb_Main() {
	if(q_io == 0) //q_io란
		/*
		##########################################################################
		# q_io 라이브러리는 cdm의 기본 내장 라이브러리입니다. 자세히 알아보세요. #
		# https://                                                               #
		##########################################################################D
		*/
	{
		setlocale(LC_ALL, "");
	}
	UINT16 cdmmb_t_1 = cdmb_Memory(); //코드를 메모리에 불러오기
	if (cdmmb_t_1 == 0x41) { //불러올 수 없으면 종료
		return 0x41;
	}
	else { // 불러왔으면 코드가 종료될때까지 반복
		cdmb_Parsing();
	}
}

inline UINT16 cdmb_Memory() {
	FILE* cdm_t_WFILE1 = _wfopen(L"StartMemory", L"rb, ccs=UTF-16LE"); // 리틀엔디언 기반으로 UTF-16 파일을 불러오기
	if (!cdm_t_WFILE1) {
		return 0x41; // 불러오지 못하면 종료
	}
	fread(&memory[16], sizeof(UINT16), 256, cdm_t_WFILE1); // #E[16]부터 천천히 메모리를 불러오4기
}
static UINT16 cdmb_CommandFuncReturnen = 0x0; //코드 종료값 변수 선언 및 정의
inline UINT16 cdmb_Parsing() { // 코드 반복실행 함수
	UINT16 cdm_t_MEMORYPOINTER = 0; // 메모리 포인터 위치 TODO: 정의 값을 0->0x0010
	cdm_t_MEMORYPOINTER = memory[cdm_t_MEMORYPOINTER]; // 메모리 이동
	while(1)//반복
	{
		cdmb_CommandFuncReturnen = cdmb_Command(&cdm_t_MEMORYPOINTER); // 코드 한줄씩 실행
		//
		if (cdmb_CommandFuncReturnen != 0) { // 코드에서 0이 아닌것을 반환하면 종료
			break;
		}
	}
	//
}
//todo: 바이트 코드를 구현하기
inline UINT16 cdmb_Command(UINT16* dPoint) {
	if (memory[*dPoint] == 0x0000) { //push
		/*
		PUSH 예약어

		 ###########
		 # PUSH란? #
		 ######################################################################################
		 # 스택에 값을 넣는 것을 말합니다. 본 명령어 셋은(는) (명령어) (옵션1) (옵션2)입니다. #
		 ######################################################################################
		*/
		//s
		switch (memory[*dPoint + 1]) { // 해당 (명령어)의 (옵션1)의 값을 받기
		case 0x0001: // 1을(를) 받았을 경우,
			cdmb_Push(2433, &stack1_Count, memory[*dPoint + 2]); // 1번 스택에 PPUSH
			break;
		case 0x0002: // 2을(를) 받았을 경우,
			cdmb_Push(2689, &stack2_Count, memory[*dPoint + 2]); // 2번 스택에 PUSH
			break;
		case 0x0003: // 3을(를) 받았을 경어ㅜ
			cdmb_Push(2945, &stack3_Count, memory[*dPoint + 2]);// )
			break;
		default:
			cdmb_Error(0x0100);
			break;
		}
		*dPoint += 3;
	}
	else if (memory[*dPoint] == 0x0001) { //pop
		/*
		#######
		# POP #
		#######################################################
		# 이 명령어는 스택의 마지막에 넣었던 값을 터트립니다. #
		#######################################################
		*/
		switch (memory[*dPoint + 1]) {
		case 0x0001:
			cdmb_Pop(2433, &stack1_Count); // 1번 스택 터트리기
			break;
		case 0x0002:
			cdmb_Pop(2689, &stack2_Count); // 2번 스택 터트리기
			break;
		case 0x0003:
			cdmb_Pop(2945, &stack3_Count); // 3번 스택 터트리기
			break;
		default:
			cdmb_Error(0x0101);
			break;
		}
		*dPoint += 2;
	}
	else if (memory[*dPoint] == 0x0002) { //safe
		/*
		########
		# SAFE #
		################################################################
		# 본 명령어는 (옵션1)에(서) 해당하는 번허의 스택을 저장합니다. #
		################################################################
		*/
		switch (memory[*dPoint + 1]) {
		case 0x0001:
			cdmb_Safe(2433, stack1_Count, memory[*dPoint + 2]);
			break;
		case 0x0002:
			cdmb_Safe(2689, stack2_Count, memory[*dPoint + 2]);
			break;
		case 0x0003:
			cdmb_Safe(2945, stack3_Count, memory[*dPoint + 2]);
			break;
		default:
			cdmb_Error(0x0102);
			break;
		}
		//
		*dPoint += 3;
	}
	else if (memory[*dPoint] == 0x0003) { //load
		switch (memory[*dPoint + 1]) {
		case 0x0001:
			cdmb_Load(2433, &stack1_Count, memory[*dPoint + 2]);
			break;
		case 0x0002:
			cdmb_Load(2689, &stack2_Count, memory[*dPoint + 2]);
			break;
		case 0x0003:
			cdmb_Load(2945, &stack3_Count, memory[*dPoint + 2]);
			break;
		default:
			cdmb_Error(0x0103);
			break;
		}
		*dPoint += 3;
	}
	else if (memory[*dPoint] == 0x0004) { //echo
		printf("%04x %d", memory[*dPoint + 1], memory[*dPoint + 1]);
		*dPoint += 2;
	}
	else if (memory[*dPoint] == 0xFEFF) {
		return 1;
	}
	return 0;
}

inline UINT16 cdmb_Push(UINT16 hPoint, UINT16* hCount, UINT16 _16bit) {
	memory[hPoint + *hCount] = _16bit;
	*hCount += 1;
	return 0;
}

inline UINT16 cdmb_Error(UINT16 rErrorCodes) {
	memory[1] = rErrorCodes;
	return 0;
}

inline UINT16 cdmb_Pop(UINT16 pPoint, UINT16* pCount) {
	//memory[]
	*pCount += 1;
	return 0;
}

inline UINT16 cdmb_Safe(UINT16 ePoint, UINT16 eCount, UINT16 ePushTheMemory) { //
	memory[ePushTheMemory] = memory[ePoint + eCount];
	return 0;
}
inline UINT16 cdmb_Load(UINT16 dPoint, UINT16* dCount, UINT16 dLoadTheMemory) {
	cdmb_Push(dPoint, dCount, memory[dLoadTheMemory]);
	return 0;
}

//

#endif //NO_BANARY
#endif