#include "header.h"

void print_list(struct student* lp)
{
	int i;

	printf("\t  |\t\t   |\t\t    |\n   ID\t  |\t Teamname  |   \t    Company |");
	printf("\n__________|________________|________________|\n\t  |\t\t   |\t\t    |\n");
	for (i = 0; i < 6; i++)
	{
		printf("%5d\t  |\t%10s |%15s |\n",
			(lp + i)->id, (lp + i)->teamname, (lp + i)->company);
	}
}