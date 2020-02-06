/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수,포인터 스왑
  --------------------------------------------------------------------------------
  first created - 2020.02.06
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap_ptr(char** ppa, char** ppb);
void print_str(char** pps, int cnt);
void print_ary(int (*pa)[4]);


// 메인함수
int main(void)
{

	/*char* pa = "success";
	char* pb = "failure";

	printf("pa->%s, pb->%s \n", pa, pb);
	swap_ptr(&pa, &pb);
	printf("pa->%s, pb->%s \n", pa, pb);
	*/
	/*
	char* ptr_ary[] = { "eagle","tiger","lion","squirrel" };
	int count;

	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
	printf_str(ptr_ary, count);
	*/
	/*
	int ary[5] = { 2,4,5,7,8 };

	printf(" %d \n", *ary);
	printf(" %u \n", ary);
	printf(" %u \n", *&ary);
	printf(" %u \n", ary + 1);
	printf(" %u \n", (ary + 1));
	printf(" %u \n", &ary + 1);
	printf(" %d \n", *(ary + 1));
	printf(" %d \n", *(ary + 3));
	printf(" %u \n", *&ary + 1);
	*/
	/*
	int ary[3][4] = { {1,2,3,4},{5,6,7,8},{9,1,2,3} };
	int(*pa)[4];
	pa = ary;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%5d", pa[i][j]);
		}
		printf("\n");
	}
	*/

	int ary[3][4] = { {1,2,3,4},{5,6,7,8},{9,1,2,3} };

	print_ary(ary);


	system("pause");
	return EXIT_SUCCESS;
}

void swap_ptr(char** ppa, char** ppb)
{
	char* temp;
	temp = *ppa;
	*ppa = *ppb;
	*ppb = temp;
}

void printf_str(char** pps, int cnt)
{
	for (int i = 0; i < cnt; i++)
	{
		printf("%s \n", pps[i]);
	}
}

void print_ary(int (*pa)[4])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%5d", pa[i][j]);
		}
	}
}