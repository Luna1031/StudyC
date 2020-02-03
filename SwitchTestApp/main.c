/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 / 조건문
  --------------------------------------------------------------------------------
  first created - 2020.02.03
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    int rank = 0, res = 0;
    
    scanf("%d", &rank);

    switch (rank)
    {
    case 1:
        res = 300;
        break;
    case 2:
        res = 200;
        break;
    case 3:
        res = 100;
        break;
    default:
        res = 10;
        break;
    }

    printf("rank = %d, res = %d \n", rank, res);

    /* 위의 swotch문과 같다.
    if (rank == 1)
    {
        res = 300;
    }
    else if (rank == 2)
    {
        res = 200;
    }
    else if (rank == 3)
    {
        res = 100;
    }
    else
    {
        res = 10;
    }
    
    printf("rank = %d, res = %d \n", rank, res);
    */

	system("pause");
	return EXIT_SUCCESS;
}