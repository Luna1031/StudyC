/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�,���̵������� �ǽ�
  --------------------------------------------------------------------------------
  first created - 2020.02.06
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
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