/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수,보이드포인터 실습
  --------------------------------------------------------------------------------
  first created - 2020.02.06
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    int a = 10;
    double b = 3.5;
    void* vp;

    vp = &a;
    printf("a :%d\n", *(int*)vp);

    vp = &b;
    printf("b :%lf\n", *(double*)vp);

	system("pause");
	return EXIT_SUCCESS;
}