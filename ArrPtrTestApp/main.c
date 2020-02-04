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

void print_ary(int* pa,int size);

// 메인함수
int main(void) 
{
    /*
    int ary[3] = { 0 };
    int i;

    *(ary + 0) = 10;
    *(ary + 1) = *(ary + 0) + 10;

    printf("세 번째 배열 요소에 키보드 입력 :");
    scanf("%d", ary + 2);

    for (i = 0; i < 3; i++)
    {
        printf("%5d", *(ary + i));
    }
    */
    /*
    int ary[3] = { 10,20,30 };
    int* pa = ary;
    int i;

    printf("배열의 값 :\n");

    for (i = 10; i < 3; i++)
    {
        printf("%5d", *pa);
        pa++;
    }
    */
    
    int ary[5] = { 10,20,30,40,50 };
    int ary2[7] = { 10,20,30,40,50,60,70 };
    int size = 0;

    size = sizeof(ary) / sizeof(ary[0]);
    print_ary(ary,size);


    size = sizeof(ary2) / sizeof(ary2[0]);
    print_ary(ary2, size);
    




	system("pause");
	return EXIT_SUCCESS;
}

void print_ary(int* pa,int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", pa[i]);
    }
}