/*
 ################
 # STACK�� ���� #
 ################
 �� ###############################################
 �� # 1 # // {                                    #
 �� # 2 #	���� ��뿡 ���� ����                 #
 �� # 3 #	���� ������ ������ ���� ����ֽ��ϴ�. #
 �� # 4 # }                                       #
 �� #                                             #
 �� ###############################################
 �� 
 �� #########
 �� #       #
 �� # #   # #
 �� # #   # #
 �� # #   # #
 �� # #   # #
 �� # #   # #
 �� # ##### #
 �� #       #
 �� #########
 �� 
 �� #############################################
 �� # 1 # // {                                  #
 �� # 2 #	���⿡�� ���ÿ� 2�� Ǫ���ϰڽ��ϴ�. #
 �� # 3 # }                                     #
 �� # 4 $                                       #
 �� # 5 # PUSH 1 2                              #
 �� #                                           #
 �� #############################################
 �� 
 �� #########
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
//#include"qmach/qdisk.h"
//#include<Skout.h>
//#include"v.h"

//
#pragma comment (lib, "winmm.lib")    //����
#include <mmsystem.h>                //����
#include <Digitalv.h>                //����

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
#define lineQ ��
#define lineE ��
#define lineZ ��
#define lineC ��
#define lineW ��
#define lineA ��
#define lineD lineA
#define lineX lineW
#define lineAW ��
#define lineWA ��
#define lineDW ��
#define linwWD ��
#define jesusCrist ��
//#define ssang "
#define line2 f(x) fputc('#x')
//fputc(a, stdout)

// ����������������������
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
#error q_io�� 0�� 1�Դϴ�.
#endif
#else
#define q_io 0
#endif

//�� ���� �˾Ƽ� �м��Ͻð�
//�� �Ʒ��� ���� �����ϴ� ���Դϴ�.

static UINT16 memory[4096] = { 0, }; //�� ���α׷��� �޸��Դϴ�.
static UINT16 DK = 0x0000; //data keeck
static UINT16 AK = 0x0000; //adress keeck
static UINT16 SK = 0x0000; //status keeck
static UINT16 IK = 0x0000; //instruction keeck
static UINT16 PC = 0x0000; //program counter

inline UINT16 memory_mgr(UINT16 _number) { //for standad 1.2
	UINT16 number = _number;
	if (number < 0x1000) {
		return number;
	}
	else if (number < 0x2000) {
		return memory[number - 0x1000];
	}
	else {
		switch (number) {
		case 0x2000:
			return DK;
		case 0x2001:
			return AK;
		case 0x2002:
			return SK;
		case 0x2003:
			return IK;
		case 0x2004:
			return PC;
		}
		//
	}
	return 0x0000;
}

inline UINT16* memory_mgrP(UINT16 number) {
	//if (number < 0x1000) {
	//	return number;
	//}
	//if (number >= 0x1000) {
	//	return &memory[number - 0x1000];
	//}
	//else {
	//	switch (number) {
	//	case 0x2000:
	//		return &DK;
	//	case 0x2001:
	//		return &AK;
	//	case 0x2002:
	//		return &SK;
	//	case 0x2003:
	//		return &IK;
	//	case 0x2004:
	//		return &PC;
	//	}
	//	//
	//}
	return number;
}

//�� ���α׷��� �⺻ ������ ī��Ʈ�Դϴ�.
/*
E[2-4]��(��) �� ���α׷��� memory���� ���� �߿��� �����Դϴ�.. �� ������ ���ÿ� ���� ��� �׿��ִ��� ��Ÿ���ϴ�.

 #######################
 # STACK��(��) �����? #
 #######################

  stack�� ���Լ����� �ϴ� �ϳ��� ��������Դϴ�. �Ʒ��� �׸��� ������.

  #   #
  #####
  # 1 #
  #####
  # 2 #
  #####

  stack�� 2, 1 ������ �־����ϴ�. ��,���� �������� ���� ���� ������ �� �ֽ��ϴ�.
*/

/*
 ###################
 # memory�� ���൵ #
 ###################
 #
 ###################################################################################
 # 0: ����� ���� ó���� �ִ� �޸� ��ġ�̸�, ���⿡�� ����Ȱ��� ��ġ�����Դϴ�. #
 #    �ش���ġ�� �����ϰ� �� ��ġ���� ��ũ��Ʈ�� �����մϴ�.                       #
 ###################################################################################
 # 1: �� ���� ��ũ��Ʈ ���൵�� ������ ���� �����ڵ带 ��ȯ�մϴ�.                 #
 ###################################################################################
 # 2-4: ������ ī��Ʈ�Դϴ�.                                                       #
 ###################################################################################
 # 5-7: ���� ��ǻ���� ��ũ�� �а� windows�� ����ϴ� �� �����մϴ�.                #
 ###################################################################################
 # 8-10: CDM�� ���� ��ũ�� �а� �����մϴ�.                                         #
 ###################################################################################
 # 16-271: �� ���� ���α׶��� �������� ���� ���� �����ϴ� ���Դϴ�.                #
 ###################################################################################
 # 272-2431: �� ���� ��¹��� �Դϴ�.                                              #
 ###################################################################################
 # 2432: �� ���� Ŀ���� ��ġ�Դϴ�.                                                #
 ###################################################################################
 # 2433-2868: ù ��° ������ �����Դϴ�.                                           #
 ###################################################################################
 # 2869-2944: �� ��° ������ �����Դϴ�.                                           #
 ###################################################################################
 # 2945-3200: �� ��° ������ �����Դϴ�.                                           #
 ###################################################################################

 * ����!!! {
	1. 3201 ���� ���������Դϴ�.
 }

 ��ƴϻǻ� �̸� ����
*/

// ��ƴ� �ǻ�, ��ƴ� �ǻ�, ��ƴ� �ǻ�, ��ƴ� �ǻ�, ��ƴ� �ǻ�, ��ƴ� �ǻ�, ��ƴ� �ǻ�

/*��ƴ� �ǻ�, 
��ƴ� �ǻ�, 
��ƴ� �ǻ�, 
��ƴ� �ǻ�,��ƴ� �ǻ�, 
��ƴ� �ǻ�,��ƴ� �ǻ�, 
��ƴ� �ǻ�,��ƴ� �ǻ�, ��ƴ� �ǻ�, 

��ƴ� �ǻ�,
��ƴ� �ǻ�,
��ƴ� �ǻ�,

��ƴ� �ǻ�,
��ƴ� �ǻ�,
��ƴ� �ǻ�,
��ƴ� �ǻ�,
��ƴ� �ǻ�,
��ƴ� �ǻ�,
��ƴ� �ǻ�,
��ƴ� �ǻ�, ��ƴ� �ǻ�, ��ƴ� �ǻ�, ��ƴ� �ǻ�, ��ƴ� �ǻ�*/

//typedef (inline UINT16) ebikawa;
typedef volatile UINT16 v16;
typedef volatile UINT16* v19;

inline UINT16 cdmb_Main(); //cdmb�� '����'�̶�°Ÿ� �����ϰ� ���ִ� cdmb �� ��ü 
inline UINT16 cdmb_Memory(); // cdmb���� ��Ʋ����� ������� ó�� ������ �ڵ带 �ҷ����ִ� ��
//
inline UINT16 cdmb_Parsing(); // Ŀ�ǵ��� �޸� ������ ���� ������
inline UINT16 cdmb_Command(UINT16* dPoint); // Ŀ�ǵ��� ���� ���� �Լ�

//���⼭ ���ʹ� ������ �ƴ� ���ǿ��� �ּ��� �ްڽ��ϴ�.
inline UINT16 cdmb_Push(UINT16 hPoint, UINT16* hCount, UINT16 _16bit);
inline UINT16 cdmb_Error(UINT16 rErrorCodes);
inline UINT16 cdmb_Pop(UINT16 pPoint, UINT16* pCount);
inline UINT16 cdmb_Safe(UINT16 ePoint, UINT16 eCount, UINT16 ePushTheMemory);
inline UINT16 cdmb_Load(UINT16 dPoint, UINT16* dCount, UINT16 dLoadTheMemory);
inline UINT16 cdmb_Add(UINT16 dStack1, v19 dCount1, UINT16 dStack2, v19 dCount2, UINT16 dPushStack, UINT16* dPushCount);
inline UINT16 cdmb_Sub(UINT16 dStack1, v19 dCount1, UINT16 dStack2, v19 dCount2, UINT16 dPushStack, UINT16* dPushCount);
inline UINT16 cdmb_Mul(UINT16 dStack1, v19 dCount1, UINT16 dStack2, v19 dCount2, UINT16 dPushStack, UINT16* dPushCount);
inline UINT16 cdmb_Div(UINT16 dStack1, v19 dCount1, UINT16 dStack2, v19 dCount2, UINT16 dPushStack, UINT16* dPushCount);

inline UINT16 cdmb_Main() {
	if(q_io == 0) //q_io��
		/*
		##########################################################################
		# q_io ���̺귯���� cdm�� �⺻ ���� ���̺귯���Դϴ�. �ڼ��� �˾ƺ�����. #
		# https://                                                               #
		##########################################################################D
		*/
	{
		
	}
	setlocale(LC_ALL, "");
	UINT16 cdmmb_t_1 = cdmb_Memory(); //�ڵ带 �޸𸮿� �ҷ�����
	if (cdmmb_t_1 == 0x41) { //�ҷ��� �� ������ ����
		return 0x41;
	}
	else { // �ҷ������� �ڵ尡 ����ɶ����� �ݺ�
		cdmb_Parsing();
	}
	return 0;
}

inline UINT16 cdmb_Memory() {
	FILE* cdm_t_WFILE1 = _wfopen(L"StartMemory", L"rb, ccs=UTF-16LE"); // ��Ʋ����� ������� UTF-16 ������ �ҷ�����
	if (!cdm_t_WFILE1) {
		return 0x41; // �ҷ����� ���ϸ� ����
	}
	fread(memory + 16, sizeof(UINT16), 256, cdm_t_WFILE1); // #E[16]���� õõ�� �޸𸮸� �ҷ���4��
	return 0x00;
}
static UINT16 cdmb_CommandFuncReturnen = 0x0; //�ڵ� ���ᰪ ���� ���� �� ����
inline UINT16 cdmb_Parsing() { // �ڵ� �ݺ����� �Լ�
	UINT16 cdm_t_MEMORYPOINTER = 0; // �޸� ������ ��ġ TODO: ���� ���� 0->0x0010
	memory[0] = 0x0010;
	cdm_t_MEMORYPOINTER = memory[cdm_t_MEMORYPOINTER]; // �޸� �̵�
	while(1)//�ݺ�
	{
		cdmb_CommandFuncReturnen = cdmb_Command(&cdm_t_MEMORYPOINTER); // �ڵ� ���پ� ����
		//
		if (cdmb_CommandFuncReturnen != 0) { // �ڵ忡�� 0�� �ƴѰ��� ��ȯ�ϸ� ����
			break;
		}
		HMODULE hmodule = INVALID_HANDLE_VALUE;
		WIN32_FIND_DATA win32f = { 0, };
		FILE* linky = NULL;
		if ((memory[5] & 0x0f00) == 0x0100) {
			if ((memory[5] & 0x000f) == 1) { // ���� �˻�
				hmodule = FindFirstFile((memory + *(memory + 6)), &win32f);
				wcscpy((memory + *(memory + 7)), win32f.cFileName); //TODO: �̰� ���߿� ���� ��ɾ�� ������
			}
			else if ((memory[5] & 0x003f) == 2) { // ���� �˻�
				FindNextFile(hmodule, &win32f);//dsdsdsd (memory + *(memory + 6))
				//s
				//
				wcscpy((memory + *(memory + 7)), win32f.cFileName);
				//wcscpy((memory + *(memory + 7) + 1), (wchar_t)win32f.dwFileAttributes);
				*(memory + *(memory + 7) + 1) = (UINT16)win32f.dwFileAttributes;
			}
			else if ((memory[5] & 0x003f) == 3) { // ���丮 ����
				CreateDirectory((memory + *(memory + 6)), NULL);
			}
			else if ((memory[5] & 0x003f) == 4) { // ���� ����
				linky = _wfopen((memory + *(memory + 6)), (memory + *(memory + 7)));
			}
			else if ((memory[5] & 0x003f) == 5) { // ���� �ݱ�
				fclose(linky);
			}
			else if ((memory[5] & 0x003f) == 6) { // ���͸� �ݱ�
				FindClose(hmodule);
			}
			else if ((memory[5] & 0x003f) == 7) { // ���� ������
				int seekmem = 0;
				seekmem = (int)memory[7] & 0xffff;
				switch (memory[6]) {
				case 1:
					fseek(linky, SEEK_SET, seekmem * 2);
					break;
				case 2:
					fseek(linky, SEEK_CUR, seekmem * 2);
					break;
				case 3:
					fseek(linky, SEEK_END, seekmem * 2);
					break;
				default:
					//
					break;
				}
			}
			else if ((memory[5] & 0x003f) == 8) { // ���
				*(memory + *(memory + 6)) = fgetwc(linky);
				fseek(linky, SEEK_CUR, -2);
			}
			else if ((memory[5] & 0x003f) == 9) { // ����
				//*()
				fputwc(memory[6], linky);
				fseek(linky, SEEK_CUR, -2);
			}//]//P}
			else if ((memory[5] & 0x003f) == 10) {
				RemoveDirectory((memory + *(memory + 6)));
			}
			else if ((memory[5] & 0x003f) == 11) {
				DeleteFileW((memory + *(memory + 6)));
			}
			else if ((memory[5] & 0x003f) == 12) {
				MoveFile((memory + *(memory + 6)), (memory + *(memory + 7)));
			}
			else if ((memory[5] & 0x003f) == 13) {
				CopyFile((memory + *(memory + 6)), (memory + *(memory + 6)), FALSE); //TODO: ���߿� 1.0 �������� �̰� �ٲܰ���
			}
			else if ((memory[5] & 0x003f) == 14) {
				if (win32f.dwFileAttributes & FILE_ATTRIBUTE_ARCHIVE) {
					*(memory + *(memory + 6)) = !(win32f.dwFileAttributes & FILE_ATTRIBUTE_ARCHIVE);
				}
				else {
					*(memory + *(memory + 6)) = !(win32f.dwFileAttributes & FILE_ATTRIBUTE_ARCHIVE);
				}
			}
			memory[5] = memory[5] & 0x003f;
			if ((memory[8] & 0x0f00) == 0x0100) { //���� ����Ǫ�� Ű���� �ɼ�
				FILE* disko = NULL;
				if ((memory[8] & 0x003f) == 1) {
					//opendisk((memory + 9), disko);
					disko = _wfopen((memory + 9), L"wb, ccs=UTF-16LE");
					//////////op
					//5:59aa
					//	//aa
					//
				}
				else if ((*(memory + 8) & 0x003f) == 2) {
					fclose(disko);
				}
				else if ((memory[8] & 0x003f) == 3) {
					fseek(disko, SEEK_CUR, -1);
				}
				else if ((memory[8] & 0x003f) == 4) {
					fseek(disko, SEEK_CUR, 1);
				}
				else if ((memory[8] & 0x003f) == 5) {
					*(memory + *(memory + 9)) = fgetwc(disko);
					fseek(disko, SEEK_CUR, -1);
				}
				else if ((memory[8] & 0x003f) == 6) {
					/**(memory + *(memory + 9)) = fgetwc(disko);*/
					fputwc(*(memory + *(memory + 9)), disko);
					fseek(disko, SEEK_CUR, -1);
				}
			}

			//���⿡�� ���� ���� ��ġ�� �߰��� �� �ֽ��ϴ�.
		}
	}
	printf("\n\n");
	for (int counting = 0; counting < 4096; counting++) {
		printf("%04x ", memory[counting]);
	}
	//
	return 0;
}
//todo: ����Ʈ �ڵ带 �����ϱ�
inline UINT16 cdmb_Command(UINT16* dPoint) {
	if (memory[*dPoint] == 0x0000) { //push
		/*
		PUSH �����

		 ###########
		 # PUSH��? #
		 ######################################################################################
		 # ���ÿ� ���� �ִ� ���� ���մϴ�. �� ��ɾ� ����(��) (��ɾ�) (�ɼ�1) (�ɼ�2)�Դϴ�. #
		 ######################################################################################
		*/
		//s
		switch (memory[*dPoint + 1]) { // �ش� (��ɾ�)�� (�ɼ�1)�� ���� �ޱ�
		case 0x0001: // 1��(��) �޾��� ���,
			cdmb_Push(2433, &memory[2], memory_mgr(memory[*dPoint + 2])); // 1�� ���ÿ� PPUSH
			break;
		case 0x0002: // 2��(��) �޾��� ���,
			cdmb_Push(2689, &memory[3], memory_mgr(memory[*dPoint + 2])); // 2�� ���ÿ� PUSH
			break;
		case 0x0003: // 3��(��) �޾��� ����
			cdmb_Push(2945, &memory[4], memory_mgr(memory[*dPoint + 2]));// )
			break;
		default:
			cdmb_Error(0x0100);
			break;
		}
		*dPoint += 3;
	}
	//else if (memory[*dPoint] == 0x0100) { //push
	//	/*
	//	PUSH �����

	//	 ###########
	//	 # PUSH��? #
	//	 ######################################################################################
	//	 # ���ÿ� ���� �ִ� ���� ���մϴ�. �� ��ɾ� ����(��) (��ɾ�) (�ɼ�1) (�ɼ�2)�Դϴ�. #
	//	 ######################################################################################
	//	*/
	//	//s
	//	switch (memory[*dPoint + 1]) { // �ش� (��ɾ�)�� (�ɼ�1)�� ���� �ޱ�
	//	case 0x0001: // 1��(��) �޾��� ���,
	//		cdmb_Push(2433, &memory[2], memory_mgr(memory + *(memory + (*dPoint + 2)))); // 1�� ���ÿ� PPUSH
	//		break;
	//	case 0x0002: // 2��(��) �޾��� ���,
	//		cdmb_Push(2689, &memory[3], memory_mgr(memory + *(memory + (*dPoint + 2)))); // 2�� ���ÿ� PUSH
	//		break;
	//	case 0x0003: // 3��(��) �޾��� ����
	//		cdmb_Push(2945, &memory[4], memory_mgr(memory + *(memory + (*dPoint + 2))));// )
	//		break;
	//	default:
	//		cdmb_Error(0x0100);
	//		break;
	//	}
	//	*dPoint += 3;
	//}
	else if (memory[*dPoint] == 0x0001) { //pop
		/*
		#######
		# POP #
		#######################################################
		# �� ��ɾ�� ������ �������� �־��� ���� ��Ʈ���ϴ�. #
		#######################################################
		*/
		switch (memory[*dPoint + 1]) {
		case 0x0001:
			cdmb_Pop(2433, &memory[2]); // 1�� ���� ��Ʈ����
			break;
		case 0x0002:
			cdmb_Pop(2689, &memory[3]); // 2�� ���� ��Ʈ����
			break;
		case 0x0003:
			cdmb_Pop(2945, &memory[4]); // 3�� ���� ��Ʈ����
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
		# �� ��ɾ�� (�ɼ�1)��(��) �ش��ϴ� ������ ������ �����մϴ�. #
		################################################################
		*/
		switch (memory[*dPoint + 1]) {
		case 0x0001:
			cdmb_Safe(2433, memory[2], memory_mgr(memory[*dPoint + 2]));
			break;
		case 0x0002:
			cdmb_Safe(2689, memory[3], memory_mgr(memory[*dPoint + 2]));
			break;
		case 0x0003:
			cdmb_Safe(2945, memory[4], memory_mgr(memory[*dPoint + 2]));
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
			cdmb_Load(2433, &memory[2], memory_mgr(memory[*dPoint + 2]));
			break;
		case 0x0002:
			cdmb_Load(2689, &memory[3], memory_mgr(memory[*dPoint + 2]));
			break;
		case 0x0003:
			cdmb_Load(2945, &memory[4], memory_mgr(memory[*dPoint + 2]));
			break;
		default:
			cdmb_Error(0x0103);
			break;
		}
		*dPoint += 3;
	}
	else if (memory[*dPoint] == 0x0004) { //echo
		printf("%04x %04x ", *(memory + *(memory + *dPoint + 1)),*(memory + *dPoint + 1));
		*dPoint += 2;
	}
	else if (memory[*dPoint] == 0x0005) { //output
		//wprintf(L"%c", memory[*dPoint + 1]);
		_putwch(memory_mgr(*(memory + *dPoint + 1)));
		*dPoint += 2;
	}
	else if (*(memory + (*dPoint)) == 0x1000) { // add
		//cdmb_Add();
		switch (*(memory + *dPoint + 1)) {
		case 1:
			cdmb_Add(2433, &memory[2], *(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433, (memory + (*(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433)), *(memory + *dPoint + 3) == 1 ? 2433 : *(memory + *dPoint + 3) == 2 ? 2689 : *(memory + *dPoint + 3) ? 2945 : 2433, (memory + (*(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433)));
			break;
		case 2:
			cdmb_Add(2689, &memory[3], *(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433, (memory + (*(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433)), *(memory + *dPoint + 3) == 1 ? 2433 : *(memory + *dPoint + 3) == 2 ? 2689 : *(memory + *dPoint + 3) ? 2945 : 2433, (memory + (*(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433)));
			break;
		case 3:
			cdmb_Add(2945, &memory[4], *(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433, (memory + (*(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433)), *(memory + *dPoint + 3) == 1 ? 2433 : *(memory + *dPoint + 3) == 2 ? 2689 : *(memory + *dPoint + 3) ? 2945 : 2433, (memory + (*(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433)));
			break;
		}
		*dPoint += 4;
	}
	else if (*(memory + (*dPoint)) == 0x1001) { // sub
		//cdmb_Add();
		switch (*(memory + *dPoint + 1)) {
		case 1:
			cdmb_Sub(2433, &memory[2], *(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433, (memory + (*(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433)), *(memory + *dPoint + 3) == 1 ? 2433 : *(memory + *dPoint + 3) == 2 ? 2689 : *(memory + *dPoint + 3) ? 2945 : 2433, (memory + (*(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433)));
			break;
		case 2:
			cdmb_Sub(2689, &memory[3], *(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433, (memory + (*(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433)), *(memory + *dPoint + 3) == 1 ? 2433 : *(memory + *dPoint + 3) == 2 ? 2689 : *(memory + *dPoint + 3) ? 2945 : 2433, (memory + (*(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433)));
			break;
		case 3:
			cdmb_Sub(2945, &memory[4], *(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433, (memory + (*(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433)), *(memory + *dPoint + 3) == 1 ? 2433 : *(memory + *dPoint + 3) == 2 ? 2689 : *(memory + *dPoint + 3) ? 2945 : 2433, (memory + (*(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433)));
			break;
		}
		*dPoint += 4;
	}
	else if (*(memory + (*dPoint)) == 0x1002) { // mul
		//cdmb_Add();
		switch (*(memory + *dPoint + 1)) {
		case 1:
			cdmb_Mul(2433, &memory[2], *(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433, (memory + (*(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433)), *(memory + *dPoint + 3) == 1 ? 2433 : *(memory + *dPoint + 3) == 2 ? 2689 : *(memory + *dPoint + 3) ? 2945 : 2433, (memory + (*(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433)));
			break;
		case 2:
			cdmb_Mul(2689, &memory[3], *(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433, (memory + (*(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433)), *(memory + *dPoint + 3) == 1 ? 2433 : *(memory + *dPoint + 3) == 2 ? 2689 : *(memory + *dPoint + 3) ? 2945 : 2433, (memory + (*(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433)));
			break;
		case 3:
			cdmb_Mul(2945, &memory[4], *(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433, (memory + (*(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433)), *(memory + *dPoint + 3) == 1 ? 2433 : *(memory + *dPoint + 3) == 2 ? 2689 : *(memory + *dPoint + 3) ? 2945 : 2433, (memory + (*(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433)));
			break;
		}
		*dPoint += 4;
	}
	else if (*(memory + (*dPoint)) == 0x1003) { // div
		//cdmb_Add();
		switch (*(memory + *dPoint + 1)) {
		case 1:
			cdmb_Div(2433, &memory[2], *(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433, (memory + (*(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433)), *(memory + *dPoint + 3) == 1 ? 2433 : *(memory + *dPoint + 3) == 2 ? 2689 : *(memory + *dPoint + 3) ? 2945 : 2433, (memory + (*(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433)));
			break;
		case 2:
			cdmb_Div(2689, &memory[3], *(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433, (memory + (*(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433)), *(memory + *dPoint + 3) == 1 ? 2433 : *(memory + *dPoint + 3) == 2 ? 2689 : *(memory + *dPoint + 3) ? 2945 : 2433, (memory + (*(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433)));
			break;
		case 3:
			cdmb_Div(2945, &memory[4], *(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433, (memory + (*(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433)), *(memory + *dPoint + 3) == 1 ? 2433 : *(memory + *dPoint + 3) == 2 ? 2689 : *(memory + *dPoint + 3) ? 2945 : 2433, (memory + (*(memory + *dPoint + 2) == 1 ? 2433 : *(memory + *dPoint + 2) == 2 ? 2689 : *(memory + *dPoint + 2) ? 2945 : 2433)));
			break;
		}
		*dPoint += 4;
	}
	else if (*(memory + *dPoint) == 0x2000) { // jump
		*dPoint = memory_mgr(*(memory + *dPoint + 1));
		//
	}
	else if (*(memory + *dPoint) == 0x2001) { // njmp
		switch (*(memory + *dPoint + 1)) {
		case 1:
			if (*(memory + 2433 + *(memory + 2)) == 0 || *(memory + 2) == 0) {
				*dPoint = memory_mgr(*(memory + *dPoint + 2));
			}
			break;
		case 2:
			if (*(memory + 2689 + *(memory + 3)) == 0 || *(memory + 3) == 0) {
				*dPoint = memory_mgr(*(memory + *dPoint + 2));
			}
			break;
		case 3:
			if (*(memory + 2945 + *(memory + 3)) == 0 || *(memory + 3) == 0) {
				*dPoint = memory_mgr(*(memory + *dPoint + 2));
			}
			break;
		default:
			cdmb_Error(0x0002);
		}
	}
	else if (*(memory + *dPoint) == 0x2002) { // ujmp
		switch (*(memory + *dPoint + 1)) {
		case 1:
			if (*(memory + 2433 + *(memory + 2)) != 0 || *(memory + 2) != 0) {
				*dPoint = memory_mgr(*(memory + *dPoint + 2));
			}
			break;
		case 2:
			if (*(memory + 2689 + *(memory + 3)) != 0 || *(memory + 3) != 0) {
				*dPoint = memory_mgr(*(memory + *dPoint + 2));
			}
			break;
		case 3:
			if (*(memory + 2689 + *(memory + 3)) != 0 || *(memory + 3) != 0) {
				*dPoint = memory_mgr(*(memory + *dPoint + 2));
			}
			break;
		default:
			cdmb_Error(0x0002);
		}
	}
	else if (*(memory + *dPoint) == 0x2003) { // sjump
		*(memory + *dPoint + 3) = cdmb_Command((memory + memory_mgr(*(memory + *dPoint + 2))));
		*dPoint += 4;
	}
	else if (memory[*dPoint] == 0xFEFF) {
		return 1;
	}
	else {
		printf("e: %04x, %04x(%d)", memory[*dPoint], *dPoint, *dPoint);
		return 1;
	}
	//printf("%04x, %04x(%d)", memory[*dPoint], *dPoint, *dPoint);
	return 0;
}

inline UINT16 cdmb_Push(UINT16 hPoint, UINT16* hCount, UINT16 _16bit) {
	*(memory + hPoint + *hCount) = _16bit;
	*hCount += 1;
	return 0;
}

inline UINT16 cdmb_Error(UINT16 rErrorCodes) {
	memory[1] = rErrorCodes;
	return 0;
}

inline UINT16 cdmb_Pop(UINT16 pPoint, UINT16* pCount) {
	//memory[]
	*pCount -= 1;
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

inline UINT16 cdmb_Add(UINT16 dStack1, v19 dCount1, UINT16 dStack2, v19 dCount2, UINT16 dPushStack, UINT16* dPushCount) {
	cdmb_Push(dPushStack, dPushCount, *(memory + dStack1 + *dCount1) + *(memory + dStack2 + *dCount2));
	return 0;
}

inline UINT16 cdmb_Sub(UINT16 dStack1, v19 dCount1, UINT16 dStack2, v19 dCount2, UINT16 dPushStack, UINT16* dPushCount) {
	cdmb_Push(dPushStack, dPushCount, *(memory + dStack1 + *dCount1) - *(memory + dStack2 + *dCount2));
	return 0;
}

inline UINT16 cdmb_Mul(UINT16 dStack1, v19 dCount1, UINT16 dStack2, v19 dCount2, UINT16 dPushStack, UINT16* dPushCount) {
	cdmb_Push(dPushStack, dPushCount, *(memory + dStack1 + *dCount1) * *(memory + dStack2 + *dCount2));
	return 0;
}

inline UINT16 cdmb_Div(UINT16 dStack1, v19 dCount1, UINT16 dStack2, v19 dCount2, UINT16 dPushStack, UINT16* dPushCount) {
	cdmb_Push(dPushStack, dPushCount, *(memory + dStack1 + *dCount1) / *(memory + dStack2 + *dCount2) != 0 ? *(memory + dStack2 + *dCount2) : 1);
	return 0;
}

//

#endif //NO_BANARY
#endif