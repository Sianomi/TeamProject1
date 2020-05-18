#ifndef _HEADER_H_
#define _HEADER_H_

#define _CRT_SECURE_NO_WARNINGS
#define MAX_PATH 260

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

typedef struct student {
	char teamname[20];
	char company[20];
	int id;
} Student;

void input(Student* list);
void print_list(struct student* lp);

void Sorting(Student* list);

int id_cmp1(const void* a, const void* b);
int id_cmp2(const void* a, const void* b);
int teamname_cmp1(const void* a, const void* b);
int teamname_cmp2(const void* a, const void* b);
int company_cmp1(const void* a, const void* b);
int company_cmp2(const void* a, const void* b);

void File_Write(Student* list);

#endif