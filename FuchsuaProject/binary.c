#include"binary.h"
#include"v.h"

SHORT KeyList[7] = { 0, };
int decount = 0;

int count = 0;
int do_exit = 0;

int in_exit = 0;
extern UINT16 memory[4096];

HINSTANCE hInstance = NULL;
HWND hwnd = NULL;

#define def_binary_helper
//#define seoneon
//#