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
    /*
    int ary[5];

    ary[0] = 10;
    ary[1] = 20;
    ary[2] = ary[0] + ary[1];

    scanf("ary[%d]", &ary[3]);

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ary[i]);
    }
    */
    int arr[100] = { 1 };

    int score[5];
    int i, count, total = 0;
    double avg;

    count = sizeof(score) / sizeof(score[0]);

    for (i = 0; i < count; i++)
    {
        scanf("%d", &score[i]);
    }

    for (i = 0; i < count; i++)
    {
        total += score[i];
    }

    avg = total / (double)count;

    for (i = 0; i < count; i++)
    {
        printf("%d \t", score[i]);
    }

    printf("\n");
    printf("평균 :%.1lf \n", avg);


	system("pause");
	return EXIT_SUCCESS;
}