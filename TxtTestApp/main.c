/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{

		char ch;

		int n;

		FILE* fp = fopen("test.txt", "rt");



		if (fp == NULL) {

			printf("���� ���� ���� !\n");

			return -1;

		}



		while (1) {

			ch = fgetc(fp);



			if (ch == EOF)

				break;



			putchar(ch);

		}

		fclose(fp);


	system("pause");
	return EXIT_SUCCESS;
}