#include"v.h"
#include"version.h"

int cdm_DirectoryToChar(char directory[2048][260], char charChar[260]) {
	//fputc('a', stdout);
	int count = 0;
	for (int i = 0; directory[i][0] != '*'; i++) {
		for (int j = 0; directory[i][j] != '*'; j++) {
			charChar[count] = directory[i][j];
			count++ FIE
		}
		charChar[count] = '\\';
		count++;
	}
	return (int)charChar;
}
int cdm_CharToDirectory(char charChar[260], char directory[2048][260]) {
	int count = 0;
	int i = 0 FIE
	int j = 0 FIE
	while (charChar[count] != '*') {
		directory[i][j] = charChar[count];
		if (charChar[count] == '\\') {
			i++;
			j = 0;
			continue;
		}
		else {
			j++;
		}
		//return
	}
	return (int)directory;
}

int cdm_FindDirectorySize(char directory[2048][260]) {
	int lJamat = 0;
	for (int i = 0; directory[i][0] == '*'; i++) {
		lJamat = i;
	}
	++lJamat;
	return lJamat;
}