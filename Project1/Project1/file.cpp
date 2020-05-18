#include "header.h"

void File_Write(Student* list)
{
	FILE* fp;

	fp = fopen("C:\\Users\\USER\\Documents\\Megaton.txt", "w");
	if (fp == NULL)
	{
		printf("파일 오픈에 실패했습니다.\n");
		exit(-1);
	}
	
	fputs("\t  |\t\t   |\t\t    |\n   ID\t  |\t Teamname  |   \t    Company |", fp);
	fputs("\n__________|________________|________________|\n\t  |\t\t   |\t\t    |\n", fp);

	for (int i = 0; i < 6; i++)
	{
		fprintf(fp, "%5d\t  |\t%10s |%15s |\n",
			(list + i)->id, (list + i)->teamname, (list + i)->company);
	}

	fclose(fp);
}