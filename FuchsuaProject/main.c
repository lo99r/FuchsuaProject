#include"v.h"

char cdm_OpsionInput[9][260] = { 0, };
char* cdm_StringPointer;

int main(int argc, char* argv[9]) {
	if (argc == 1) {
		re:
		strcpy(cdm_OpsionInput[1], "NULLL");
		scanf("%[^\n]", cdm_OpsionInput[1]);
		//cdm_StringPointer = strtok(cdm_OpsionInput[1], " ");
		if (strcmp(cdm_OpsionInput[1], "nowin") == 0) {
			cdm_ShellMainCode();
		}
		else if (strcmp(cdm_OpsionInput[1], "NULLL") == 0) {
			goto re;
		}
		else if (strcmp(cdm_OpsionInput[1], "exit") == 0) {
			goto exitA;
		}
		goto re;
		exitA:
	}
	return 0;
}