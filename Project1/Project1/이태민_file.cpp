#include "Megaton.h"

void File_Write(Student* list)
{
	FILE* fp;

	char master_path[MAX_PATH]{ 0, }, path[MAX_PATH]{"C:\\Users\\"};
	char* pointer;

	if (GetCurrentDirectoryA(MAX_PATH, master_path) == 0)
	{
		printf("경로 반환 실패\n");
		exit(-1);
	}

	pointer = strstr(master_path, "Users");
	pointer = strtok(pointer, "\\");
	pointer = strtok(NULL, "\\");

	strcat(path, pointer);
	strcat(path, "\\Documents\\Megaton.txt");

	fp = fopen(path, "w");
	if (fp == NULL)
	{
		printf("파일 오픈에 실패했습니다.\n");
		exit(-1);
	}
	

	for (int i = 0; i < 6; i++)
	{
		fprintf(fp, "%5d\t %10s %15s\n",
			(list + i)->id, (list + i)->teamname, (list + i)->company);
	}
	
	fclose(fp);
	
}