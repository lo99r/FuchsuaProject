#include"v.h"

char cdm_ShellInputString[9][260] = { 0, };	//CDM 1.0.0.first2020
char cdm_FileStringCat[260] = { 0, };
char cdm_FileStringBuffer[260] = { 0, };
char cdm_HyeonjaeDirectoryGyeongro[260] = { 0, };// ".\\*"
char cdm_Directory[2048][260] = { 0, };
char cdm_QwdStar[260] = { 0, };

wchar_t cdm_Ls[260] = L"";

extern char* cdm_StringPointer;

FILE* cdm_StartMessage;

int cdm_baseDir_Func() {
	FILE* cdm_t_baseDir_cdm = fopen("baseDir.cdm", "r");
	if (cdm_t_baseDir_cdm == NULL) {
		//cdm_t_StartCdm = fopen("text.txt", "w");
		////strcpy(cdm_HyeonjaeDirectoryGyeongro, fgets());
		//fgets(cdm_HyeonjaeDirectoryGyeongro, 260, cdm_t_StartCdm);
		////fclose();
	}
	else {
		//a
		//cdm_t_StartCdm = fopen("text.txt", "w");
		////strcpy(cdm_HyeonjaeDirectoryGyeongro, fgets());
		//fgets(cdm_HyeonjaeDirectoryGyeongro, 260, cdm_t_baseDir_cdm);
		char cdm_t_FileChar = '\0';
		for (int i = 0; i < 260; i++) {
			cdm_t_FileChar = fgetc(cdm_t_baseDir_cdm);
			if (cdm_t_FileChar = '\n') {
				break;
			}
			else {
				cdm_HyeonjaeDirectoryGyeongro[i] = cdm_t_FileChar;
			}
		}
		////fclose();
		fclose(cdm_t_baseDir_cdm);
	}
}

int cdm_ShellMainCode(int eMode) {
	if (eMode != 0) {
		if (eMode == 1) {
			system("taskkill /f /im explorer.exe");
		}
	}
	FILE* cdm_t_baseDir_cdm = fopen("baseDir.cdm", "r");
	if (cdm_t_baseDir_cdm == NULL) {
		//cdm_t_StartCdm = fopen("text.txt", "w");
		////strcpy(cdm_HyeonjaeDirectoryGyeongro, fgets());
		//fgets(cdm_HyeonjaeDirectoryGyeongro, 260, cdm_t_StartCdm);
		////fclose();
		wprintf(L"¾ø´Ù°í");
	}
	else {
		//a
		//cdm_t_StartCdm = fopen("text.txt", "w");
		////strcpy(cdm_HyeonjaeDirectoryGyeongro, fgets());
		//fgets(cdm_HyeonjaeDirectoryGyeongro, 260, cdm_t_baseDir_cdm);
		char cdm_t_FileChar = '\0';
		for (int i = 0; i < 260; i++) {
			cdm_t_FileChar = fgetc(cdm_t_baseDir_cdm);
			if (cdm_t_FileChar == '\n') {
				break;
			}
			else {
				cdm_HyeonjaeDirectoryGyeongro[i] = cdm_t_FileChar;
				fputc(cdm_t_FileChar, stdout);
			}
		}
		////fclose();
		fclose(cdm_t_baseDir_cdm);
	}
	while (1) {
		cdm_StartMessage = fopen("text.txt", "r");
		if (cdm_StartMessage == NULL) {
			//
			cdm_StartMessage = fopen("text.txt", "w");
			fprintf(cdm_StartMessage, "STARTING CDM...\nCDM %s.%s\nPLEASE INPUT 'HELP'\n", CDMVersion, CDMBuild);
			fclose(cdm_StartMessage);
		}
		else {
			//fscanf(cdm_StartMessage, "%[\0]", cdm_FileStringBuffer);
			while (feof(cdm_StartMessage) == 0) {
				fgets(cdm_FileStringCat, 260, cdm_StartMessage);
				strcat(cdm_FileStringBuffer, cdm_FileStringCat);
				//strcat(cdm_FileStringBuffer, "\n");
			}
			printf("%s", cdm_FileStringBuffer);
			//
			fclose(cdm_StartMessage);
			strcpy(cdm_FileStringCat, "\0");
			break;
		}
	}
	while (1) {
		for (int i = 0; i < 9; i++) {
			strcpy(cdm_ShellInputString[i], "NULLL");
		}
		fputc('>', stdout);
		fputc(' ', stdout);
		getchar();
		scanf("%259[^\n]", cdm_ShellInputString[0]);
		cdm_StringPointer = strtok(cdm_ShellInputString[0], " ");
		strcpy(cdm_ShellInputString[1], cdm_StringPointer);
		if (strcmp(cdm_ShellInputString[0], "help") == 0) {
			printf("HELP nuduruunam mazanit watakina maguurkamfanina\nVER nuduruunam mazanit bugumuunal t-warsion\nEXT nuduruunam mazanit nubumuunal\n\
labigimii t-diriktoraya ini\nCAD change directory\nCLS clear screen\n");
		}
		else if (strcmp(cdm_ShellInputString[0], "ver") == 0) {
			printf("%s.%s\n", CDMVersion, CDMBuild);
			//
		}
		else if (strcmp(cdm_ShellInputString[0], "dir") == 0) {
			mbstowcs(cdm_Ls, cdm_HyeonjaeDirectoryGyeongro, 260);
			HMODULE cdm_SearchDirectory = INVALID_HANDLE_VALUE;
			WIN32_FIND_DATA cdm_FindedDirectoryData;
			cdm_SearchDirectory = FindFirstFile(cdm_Ls, &cdm_FindedDirectoryData);
			if (cdm_SearchDirectory == INVALID_HANDLE_VALUE) {
				printf("N0001\n");
				DWORD cdm_t_Error = GetLastError();
				printf("%lu\n", cdm_t_Error);//1;
				printf("%s\n", cdm_HyeonjaeDirectoryGyeongro);
			}
			else {
				/*do {
					printf("%s || %d || %d or %d || %d\n", (char*)cdm_FindedDirectoryData.cFileName, cdm_FindedDirectoryData.dwFileAttributes, cdm_FindedDirectoryData.ftLastWriteTime.dwLowDateTime, cdm_FindedDirectoryData.ftLastWriteTime.dwHighDateTime, cdm_FindedDirectoryData.nFileSizeHigh);
				} while (FindNextFile(cdm_HyeonjaeDirectoryGyeongro, &cdm_FindedDirectoryData) != 0);*/
				while (FindNextFile(cdm_SearchDirectory, &cdm_FindedDirectoryData) != 0) {
					wprintf(L"%ls || %d || %d or %d || %d\n", cdm_FindedDirectoryData.cFileName, cdm_FindedDirectoryData.dwFileAttributes, cdm_FindedDirectoryData.ftLastWriteTime.dwLowDateTime, cdm_FindedDirectoryData.ftLastWriteTime.dwHighDateTime, cdm_FindedDirectoryData.nFileSizeHigh);
				}
				FindClose(cdm_SearchDirectory);
			}
			//
		}
		else if (strcmp(cdm_ShellInputString[0], ":") == 0) {
			printf("%s", cdm_HyeonjaeDirectoryGyeongro);//p;
		}
		else if (strcmp(cdm_ShellInputString[0], "cad") == 0) {
			FILE* cdm_t_Nocad = fopen("baseDir.cdm", "r");
			if (cdm_t_Nocad == NULL) {
				printf("N0001\n");
				//goto nocadA;
			}
			else
			{
				if (strcmp(cdm_ShellInputString[1], ".."))
				{
					int cdm_t_1 = cdm_FindStarInStringLast(cdm_HyeonjaeDirectoryGyeongro);
					int cdm_t_2 = cdm_CdZeomDugae(cdm_HyeonjaeDirectoryGyeongro);
					cdm_HyeonjaeDirectoryGyeongro[cdm_t_2 + 1] = '*';
					for (int ii = cdm_t_2 + 2; ii < cdm_t_1 + 1; ii++) {
						cdm_HyeonjaeDirectoryGyeongro[ii] = '\0';
					}
				}
				else if (strcmp(cdm_ShellInputString[1], ".") == 0) {
					//
				}
				else {
					int cdm_t_3 = cdm_FindStarInStringLast(cdm_ShellInputString[1]);
					cdm_HyeonjaeDirectoryGyeongro[cdm_t_3] = '\0';
					//cdm
					strcat(cdm_HyeonjaeDirectoryGyeongro, cdm_ShellInputString[1]);
					//t
					strcat(cdm_HyeonjaeDirectoryGyeongro, "\\*");//f
				}
			}
		}
		else if (strcmp(cdm_ShellInputString[0], "cls") == 0) {
			COORD coord = { 0, 0 };
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
			colors(0, 7);
			//
		}
		else if (strcmp(cdm_ShellInputString[0], "ext") == 0) {
			break;
		}
		else if (strcmp(cdm_ShellInputString[0], "NULLL") == 0) {
		}
		else {
			printf("NOOOO\n");
		}
		//strcpy(cdm_ShellInputString[0]);
		//
	}
	return 0;
}