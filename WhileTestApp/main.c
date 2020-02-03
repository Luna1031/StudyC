/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.03
  writer - LYE
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    int a = 1;

    while (1)
    {
        printf("Be happy! \n");
        a++;
        if (a == 10)
        {
            break;
        }
    }



	system("pause");
	return EXIT_SUCCESS;
}