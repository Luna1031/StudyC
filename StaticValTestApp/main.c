/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 정적변수
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>



// 메인함수
int main(void) 
{

    register int i;
    auto int sum = 0;

    for (int i = 0; i <= 10000; i++)
    {
        sum += i;
    }

    printf("%d \n", sum);


	system("pause");
	return EXIT_SUCCESS;
}

void auto_func(void)
{
    auto int a = 0;

    a++;
    printf("%d \n", a);
}

void static_func(void)
{
    static int a;

    a++;
    printf("%d \n", a);
}