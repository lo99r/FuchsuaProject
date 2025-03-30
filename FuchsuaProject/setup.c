#include"v.h"




#define crdir(a) CreateDirectory(#a, NULL)
#define CRDIR(A) crdir(A)


int cdm_Setup() {
	CreateDirectoryW(L"C:\\CDM\\", NULL);
	CreateDirectoryW(L"C:\\CDM\\STARTPICK\\", NULL);
	CreateDirectoryW(L"C:\\CDM\\PROGRAMS\\", ((void*)0));
	CreateDirectoryW(L"C:\\CDM\\PROGRAMS\\UNZIPER\\", ((void*)0));
	CreateDirectoryW(L"C:\\CDM\\PROGRAMS\\PLUGGER\\", ((void*)0));

	FILE* pSetupDirectory = _wfopen(L".\\STORE\\Directory.list", L"r, ccs=UTF-16LE");
	wchar_t DirectoryWide[260] = {0,};

	while (1) {
		if(fgetws(DirectoryWide, 260, pSetupDirectory) != NULL)
		{
			DirectoryWide[wcscspn(DirectoryWide, L"\n")] = L'\0';
			CreateDirectory(DirectoryWide, NULL);
		}
		if (wcscmp(DirectoryWide, L"END") == 0) {
			break;
		}
	}

	fclose(pSetupDirectory);
	
	FILE* pSetupBatch = fopen("CDMSETUP.BAT", "r");
	if (pSetupBatch == NULL) {
		pSetupBatch = fopen("CDMSETUP.BAT", "w");
		fprintf(pSetupBatch, "@title CDM_SETUP_PROGRAM_1_0\n@color 17\n@echo %%cd%%\\* > baseDir.cdm\n@exit");
		fclose(pSetupBatch);
	}
	system("start CDMSETUP.BAT");
	system("powershell -command \"Install-Module -Name ps2exe -Force -SkipPublisherCheck\"");
	system("powershell -command \"Invoke-PS2EXE .\\STORE\\unziper.ps1 .\\unziper.exe\"");
	/*system("echo 본 프로그램의 설치경로를 입력하세요.\n");
	system("set /p installD=>");*/
	system("echo %installD% > .\\STORE\\installD");
	FILE* FindFileSet = fopen(".\\STORE\\Library.list", "r");
	if (FindFileSet == NULL) {
		wprintf(L"setupdirectory/STORE/Library.list가 존재하지 않습니다.\n");
		return 1;
	}
	else {
		char installD_Buffer[2048] = { 0, };
		installD_Buffer[0] = fgetc(FindFileSet);
		int ifor = 1;
		while (installD_Buffer[ifor] != EOF) {
			/// int it = 0;
			installD_Buffer[ifor] = fgetc(FindFileSet);
			printf("%d ", installD_Buffer[ifor]);
			_putch((int)installD_Buffer[ifor]);
			if (installD_Buffer[ifor] == -1) {
				break;
			}
			ifor++;
		}
		int numb = 0;
		char* a;
		char b[2048] = { 0, };
		char c[64][2048] = { 0, };
		strcpy(b, installD_Buffer);
		a = strtok(b, "\n");
		strcpy(c[numb], a);
		numb++;
		while (1) {
			//strcpy(b, installD_Buffer);
			a = strtok(NULL, "\n");
			strcpy(c[numb], a);
			numb++;
		}
		int cound = 0;
		char d[2048] = { 0, };
		wchar_t e[2048] = { 0, };
		char f[2048] = { 0, };
		wchar_t g[2048] = { 0, };
		BOOL h = FALSE;
		//
		while (1) {
			strcpy(d, c[cound]);
			strcpy(f, c[cound + 1]);
			mbstowcs(e, d, 2048);
			mbstowcs(g, f, 2048);
			h = CopyFile(e, g, NULL);
			//cound
			cound += 2;
		}
		wprintf(L"설치에 성공하였습니다.");
		fclose(FindFileSet);
		system("start C:\\CDM\\STARTPICK\\CDM.EXE");
	}
	return 0;
}

int find_enter(char* _strings, int _count) {
	int _____ = 1;
	int count_ = 0;
	while (1) {
		if (_strings[_____] == '\0') {
			return _____;
		}
		if (_strings[_____] == '\n') {
			_____ += 1;
		}
		if (_____ == _count) {
			return _____;
		}
	}
}

//print('dsfjaklsdjfkl' + 'asdfdsaf')
//dsfjaklsdjfklasdfdsaf

//printf("%s%s", "a", "A");
//aA

//%를 출력하고 싶을때에는 %%를 쓴다.