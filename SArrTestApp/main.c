/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - Ye En Lee
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void)
{
	/*int score[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,1,2,3}
	};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d \t", score[i][j]);
		}
		printf("\n");
	}*/

	char animal[5][20];
	int count;

	count = sizeof(animal) / sizeof(animal[0]);
	for (int i = 0; i < count; i++)
	{
		scanf("%s", animal[i]);
	}
	for (int i = 0; i < count; i++)
	{
		printf("%s\tS", animal[i]);
	}
	printf("\n");

	system("pause");
	return EXIT_SUCCESS;
}