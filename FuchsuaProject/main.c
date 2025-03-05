#include"v.h"

char cdm_OpsionInput[9][260] = { 0, };
char* cdm_StringPointer;

int main(int argc, char* argv[9]) {
	if (argc == 1) {
		scanf("%[^\n]", cdm_OpsionInput[1]);
		//cdm_StringPointer = strtok(cdm_OpsionInput[1], " ");
		if (strcmp(cdm_OpsionInput[0], "--mode:notWindows") == 0) {
			cdm_ShellMainCode();
		}
	}
}