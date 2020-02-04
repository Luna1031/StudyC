/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수/포인터
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - YeEun Lee
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
	/*
    int a=10, b=20,total;
    int* pa, * pb;
    int* pt = &total;
    double avg;
    double* pg = &avg;

    pa = &a;
    pb = &b;
    *pt = *pa + *pb;
    *pg = *pt / 2.0;

    printf("두 정수값 :%d %d \n", *pa, *pb);
    printf("합 :%d \n", *pt);
    printf("평균 :%.1lf \n", *pg);
    */
    /*
    int a = 10, b = 20;
    const int* pa = &a;

    printf("변수 a값 :%d \n", *pa);
    pa = &b;
    printf("변수 b값 :%d \n", *pa);
    pa = &a;
    //a = 20;
    printf("변수 a값 :%d \n", *pa);
    */
    /*
    char ch;
    int in;
    double db;

    char* pc = &ch;
    int* pi = &in;
    double* pd = &db;

    printf("char변수 주소 크기 :%d \n", sizeof(&ch));
    printf("int변수 주소 크기 :%d \n", sizeof(&in));
    printf("double변수 주소 크기 :%d \n", sizeof(&db));

    printf("char * 포인터의 크기 :%d \n", sizeof(pc));
    printf("int * 포인터의 크기 :%d \n", sizeof(pi));
    printf("double * 포인터의 크기 :%d \n", sizeof(pd));

    printf("char * 포인터가 가리키는 변수의 크기 :%d \n", sizeof(*pc));
    printf("int * 포인터가 가리키는 변수의 크기 :%d \n", sizeof(*pi));
    printf("double * 포인터가 가리키는 변수의 크기 :%d \n", sizeof(*pd));
    */
    /*
    int a = 10;
    int* pa = &a;
    double* pd = pa;

    printf("%d \n", a);
    printf("%d \n", *pa);
    printf("%lf \n", *pd);

    printf("%d \n", &a);
    printf("%d \n", pa);
    printf("%lf \n", pd);
    */



	system("pause");
	return EXIT_SUCCESS;
}