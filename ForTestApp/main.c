/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    
    /*
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    printf("a :%d \n", a);;
    */
    
    int sum = 0;
    for (int i = 0; i <= 100; i++)
    {
        if ((i % 3) == 0)
        {
            continue;
        }
        sum += i;
    }

    printf("sum=%d\n", sum);
    
	system("pause");
	return EXIT_SUCCESS;
}