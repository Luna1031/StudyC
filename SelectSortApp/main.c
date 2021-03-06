/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 선택정렬
  --------------------------------------------------------------------------------
  first created - 2020.02.11
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    int a[5];
    int temp;

    printf("정수 5개 입력 :");
    
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (int  i = 0; i < 4; i++)
    {
        for (int j = i + 1 ; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%5d", a[i]);
    }
    printf("\n");

	system("pause");
	return EXIT_SUCCESS;
}