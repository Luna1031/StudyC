/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
	
    // type here.
    /*
    printf("<복합대입연산자> \n");

    int a = 10, b = 20;
    int res = 2;

    a += 20;

    printf("a = %d \n", a);

    res *= b + 10; // b+10먼저 계산하고 res랑 곱한다.

    printf("b = %d \n", b);
    printf("res = %d \n", res);

    res = 2;
    res = res * b + 10;
    printf("res = %d \n\n", res);
    */
    /*
    printf("<조건연산자> \n");

    res = 0;
    res = (a > b) ? a : b;
    printf("res = %d \n", res);
    */
    
    printf("<비트연산자>\n");

    int a = 10, b = 12;

    printf("a & b :%d \n", a & b);
    printf("a ^ b :%d \n", a ^ b);
    printf("a | b :%d \n", a | b);
    printf("~a :%d \n", ~a);
    printf("a << 1 :%d \n", a << 1);
    printf("a >> 2 :%d \n", a >> 2);

    


	system("pause");
	return EXIT_SUCCESS;
}