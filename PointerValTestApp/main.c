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

void add_ten(int* pa);

int* sum(int a, int b);

// �����Լ�
int main(void) 
{
	/*
    int a = 10;

    add_ten(&a);
    printf("%d \n", a);
    */

    int* resp;

    resp = sum(10, 20);
    printf("�� ������ �� :%d \n", *resp);

	system("pause");
	return EXIT_SUCCESS;
}

void add_ten(int* pa)
{
    *pa = *pa + 10;
}

int* sum(int a, int b)
{
    static int res;

    res = a + b;

    return &res;
}