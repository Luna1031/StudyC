/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
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

// �����Լ�
int main(void) 
{
    /*
    auto int a = 10, b = 20;
    
    printf("��ȯ �� :%d %d \n", a, b);
    {
        int temp;
        temp = a;
        a = b; 
        b = temp;
    }
    printf("��ȯ �� :%d %d \n", a, b);
    */
    /*
    printf("�Լ� ȣ�� �� a�� :%d \n", a);

    assign10();
    assign20();

    printf("�Լ� ȣ�� �� a�� :%d \n", a);*/


	system("pause");
	return EXIT_SUCCESS;
}

void assign(void)
{
    int a = 0;
    a = 10;
    printf("assign�Լ� a :%d \n", a);
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