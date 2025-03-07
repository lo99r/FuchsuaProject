#include"v.h"

char cdm_ShellInputString[9][260] = { 0, };	//CDM 1.0.0.first2020
char cdm_FileStringCat[260] = { 0, };
char cdm_FileStringBuffer[260] = { 0, };
char cdm_HyeonjaeDirectoryGyeongro[260] = { 0, };// ".\\*"
char cdm_Directory[2048][260] = { 0, };
char cdm_QwdStar[260] = { 0, };

extern char* cdm_StringPointer;

FILE* cdm_StartMessage;

int cdm_ShellMainCode(int eMode) {
	if (eMode != 0) {
		if (eMode == 1) {
			system("taskkill /f /im explorer.exe");
		}
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
			HMODULE cdm_SearchDirectory = INVALID_HANDLE_VALUE;
			WIN32_FIND_DATA cdm_FindedDirectoryData;
			cdm_SearchDirectory = FindFirstFile(cdm_HyeonjaeDirectoryGyeongro, &cdm_FindedDirectoryData);
			if (cdm_SearchDirectory == INVALID_HANDLE_VALUE) {
				printf("N0001\n");
			}
			else {
				do {
					printf("%s || %d || %d or %d || %d\n", (char*)cdm_FindedDirectoryData.cFileName, cdm_FindedDirectoryData.dwFileAttributes, cdm_FindedDirectoryData.ftLastWriteTime.dwLowDateTime, cdm_FindedDirectoryData.ftLastWriteTime.dwHighDateTime, cdm_FindedDirectoryData.nFileSizeHigh);
				} while (FindNextFile(cdm_HyeonjaeDirectoryGyeongro, &cdm_FindedDirectoryData) != 0);
			}
			FindClose(cdm_SearchDirectory);
		}
		else if (strcmp(cdm_ShellInputString[0], "cad") == 0) {
			FILE* cdm_t_CAD = fopen("baseDir.cdm", "r");
			if (cdm_t_CAD == NULL) {
				printf("N0001\n");
			}
			else {
				int cdm_t_1 = cdm_FindDirectorySize(cdm_Directory);
				char** cdm_t_C1 = cdm_CharToDirectory(cdm_Directory, cdm_HyeonjaeDirectoryGyeongro);
				for (int i = 0; i < 2048; i++) {
					for (int j = 0; i < 260; j++) {
						cdm_Directory[i][j] = cdm_t_C1[i][j];
					}
					//
				}
				strcpy(cdm_Directory[cdm_t_1 + 1], cdm_ShellInputString[1]);
				char* cdm_t_C2 = cdm_CharToDirectory(cdm_HyeonjaeDirectoryGyeongro, cdm_Directory);
				for (int i = 0; i < 260; i++) {
					cdm_HyeonjaeDirectoryGyeongro[i] = cdm_t_C2[i];
				}//strcat
				strcat(cdm_HyeonjaeDirectoryGyeongro, "\\*");
				//
				printf("ok: %s", cdm_HyeonjaeDirectoryGyeongro);
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