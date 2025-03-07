#include"v.h"

int cdm_Setup() {
	FILE* pSetupBatch = fopen("CDMSETUP.BAT", "r");
	if (pSetupBatch == NULL) {
		pSetupBatch = fopen("CDMSETUP.BAT", "w");
		fprintf(pSetupBatch, "@title CDM_SETUP_PROGRAM_1_0\n@color 17\n@echo %%cd%%\\* > baseDir.cdm\n@exit");
		fclose(pSetupBatch);
	}
	system("start CDMSETUP.BAT");
	return 0;
}

//print('dsfjaklsdjfkl' + 'asdfdsaf')
//dsfjaklsdjfklasdfdsaf

//printf("%s%s", "a", "A");
//aA

//%를 출력하고 싶을때에는 %%를 쓴다.