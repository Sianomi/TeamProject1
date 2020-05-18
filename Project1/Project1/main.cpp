#include "Sorting.h"
#include "input.h"
#include "printing_list.h"

int main()
{
	Student list[6];
	input(list);
	print_list(list);
	Sorting(list);
	print_list(list);
	return 0;
}



