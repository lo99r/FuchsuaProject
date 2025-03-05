#include"v.h"

char cdm_ShellInputString[9][260] = { 0, };	//CDM 1.0.0.first2020
char cdm_FileStringCat[260] = { 0, };
char cdm_FileStringBuffer[260] = { 0, };

extern char* cdm_StringPointer;

FILE* cdm_StartMessage;

int cdm_ShellMainCode() {
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
			break;
		}
	}
	while (1) {
		for (int i = 0; i < 9; i++) {
			strcpy(cdm_ShellInputString[i], " ");
		}
		fputc('>', stdout);
		fputc(' ', stdout);
		getchar();
		scanf("%259[^\n]", cdm_ShellInputString[0]);
		cdm_StringPointer = strtok(cdm_ShellInputString[0], " ");
		strcpy(cdm_ShellInputString[1], cdm_StringPointer);
		if (strcmp(cdm_ShellInputString[0], "help") == 0) {
			printf("HELP nuduruunam mazanit watakina maguurkamfanina\nVER nuduruunam mazanit bugumuunal t-warsion\nEXT nuduruunam mazanit nubumuunal\n");
		}
		else if (strcmp(cdm_ShellInputString[0], "ver") == 0) {
			printf("%s.%s\n", CDMVersion, CDMBuild);
			//
		}
		else if (strcmp(cdm_ShellInputString[0], "ext") == 0) {
			break;
		}
		else if (strcmp(cdm_ShellInputString[0], " ") == 0) {
		}
		else {
			printf("NOOOO\n");
		}
		//strcpy(cdm_ShellInputString[0]);
		//
	}
	return 0;
}