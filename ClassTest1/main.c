/*
  filename - main.c
  version - 1.0
  description - �������� ���� ������ �ܾ� ���, X������ ����
  --------------------------------------------------------------------------------
  first created - 2020.02.0
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
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
			printf("���� ������ �ܾ� :%s \n", str1);
		}
		else
		{
			printf("���� ������ �ܾ� :%s \n", str2);
		}
	}

	system("pause");
	return EXIT_SUCCESS;
}