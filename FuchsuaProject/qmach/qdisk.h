#pragma once
#ifndef nol
#define nol
#include<stdio.h>
#include"qstrm.h"

typedef unsigned short uns16;

typedef struct _qdisk {
	uns16 diskblock[4096];
}qdisk;

inline FILE *opendisk(const uns16 diskfilename[4096], FILE* opjey);

inline FILE *opendisk(const uns16 diskfilename[4096], FILE* opjey) {
	//
	//
	//"";
	/*
	opjey 변수 사용 법
	
	opjey 부분에는 fopen();함수를 사용해주시길 바랍니다.
	fopen(파일이름, "wb, ccs=UTF-16LE");
	*/
	opjey = _wfopen((wchar_t*)diskfilename, L"wb, ccs= UTF-16LE");
	return opjey;
	//
}

#endif nol