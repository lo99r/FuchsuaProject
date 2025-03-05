#include"v.h"

char cdm_ShellInputString[9][260] = { 0, };	//CDM 1.0.0.first2020
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
			fscanf(cdm_StartMessage, "%[\0]", cdm_FileStringBuffer);
			printf("%s", cdm_FileStringBuffer);
			fclose(cdm_StartMessage);
		}
	}
	while (1) {
		fputc('>', stdout);
		fputc(' ', stdout);
		scanf("%[^\n]", cdm_ShellInputString[0]);
		cdm_StringPointer = strtok(cdm_ShellInputString[0], " ");
		if (strcmp(cdm_ShellInputString[0], "help") == 0) {
			printf("HELP nuduruunam mazanit watakina maguurkamfanina\nVER nuduruunam mazanit bugumuunal t-warsion\nEXT nuduruunam mazanit nubumuunal\n");
		}
		if (strcmp(cdm_ShellInputString[0], "ver") == 0) {
			printf("%s.%s\n", CDMVersion, CDMBuild);
			//
		}
		if (strcmp(cdm_ShellInputString[0], "ext") == 0) {
			break;
		}
	}
	return 0;
}