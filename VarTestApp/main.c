/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void assign(void);
void assign10(void);
void assign20(void);

int a;

// 메인함수
int main(void) 
{
    /*
    auto int a = 10, b = 20;
    
    printf("교환 전 :%d %d \n", a, b);
    {
        int temp;
        temp = a;
        a = b; 
        b = temp;
    }
    printf("교환 후 :%d %d \n", a, b);
    */
    /*
    printf("함수 호출 전 a값 :%d \n", a);

    assign10();
    assign20();

    printf("함수 호출 후 a값 :%d \n", a);*/


	system("pause");
	return EXIT_SUCCESS;
}

void assign(void)
{
    int a = 0;
    a = 10;
    printf("assign함수 a :%d \n", a);
}

void assign10(void)
{
    a = 10;
}

void assign20(void) 
{
    int a;

    a = 20;
}