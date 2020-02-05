/*
  filename - main.c
  version - 1.0
  description - 사전에서 먼저 나오는 단어 출력, X받으면 종료
  --------------------------------------------------------------------------------
  first created - 2020.02.0
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
	char str1[50];
	char str2[50];

	while (1)
	{
		scanf("%s %s", str1, str2);

		if (str1[0] == 'x' || str2[0] == 'x')
		{
			break;
		}
		if (strcmp(str1, str2) < 0)
		{
			printf("먼저 나오는 단어 :%s \n", str1);
		}
		else
		{
			printf("먼저 나오는 단어 :%s \n", str2);
		}
	}

	system("pause");
	return EXIT_SUCCESS;
}