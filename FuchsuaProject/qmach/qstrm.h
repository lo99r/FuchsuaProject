#pragma once
//q str mgr
#ifndef qstrm_h
#define qstrm_h

typedef unsigned short yoany16;

typedef struct _qstr {
	yoany16 main_str[4096];
	struct _header {
		yoany16 sikbyeolja[4];
		yoany16 point[2];
	}header;
	//
}qstr;

inline qstr qstrset(qstr* str, yoany16 option[4096]);

inline qstr qstrset(qstr* str, yoany16 option[4096] )
{
	yoany16 count = 0x0000;
	for (count; count < 4096; count++) {
		str->main_str[count] = option[4096];
	}
	//
	for (int i = 0; i < 1; i++) {
		*(str->header.sikbyeolja + 0) = (yoany16)'q';
		*(str->header.sikbyeolja + 1) = (yoany16)'s';
		*(str->header.sikbyeolja + 2) = (yoany16)'t';
		*(str->header.sikbyeolja + 3) = (yoany16)'r';
	}
}
#endif qstrm_h