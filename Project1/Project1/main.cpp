#include "header.h"

int main()
{
	Student list[6];

	input(list);
	print_list(list);
	Sorting(list);
	print_list(list);
	File_Write(list);

	return 0;
}