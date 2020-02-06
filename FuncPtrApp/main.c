/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, �Լ�������
  --------------------------------------------------------------------------------
  first created - 2020.02.06
  writer - Ye Eun Lee
*/

#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

int sum(int a, int b);
int mul(int a, int b);
int max(int a, int b);
void func(int (*fp)(int, int));

// �����Լ�
int main(void) 
{
	/*
    int (*fp)(int, int);
    int res;

    fp = sum;
    res = fp(10, 20);
    printf("result :%d\n", res);*/

    int sel;

    printf("01 �� ������ �� \n");
    printf("02 �� ������ �� \n");
    printf("03 �� ���� �߿��� ū �� ��� \n");
    printf("���ϴ� ������ �����ϼ��� :");
    scanf("%d", &sel);

    switch (sel)
    {
    case 1:func(sum); break;
    case 2:func(mul); break;
    case 3:func(max); break;
    }


	system("pause");
    return 0;
}

void func(int (*fp)(int, int))
{
    int a, b;
    int res;

    printf("�� ������ ���� �Է��ϼ���");
    scanf("%d %d", a, b);
    res = fp(a, b);
    printf("������� :%d \n", res);
}

int sum(int a, int b)
{
    return(a + b);
}

int mul(int a, int b)
{
    return(a * b);
}

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}