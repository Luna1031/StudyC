#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif //_MSC_VER

#include<stdio.h>
#include<stdlib.h>

int main()
{
	//type here

	int a = 10;
	double b = 3.4;

	printf("int�� ������ ũ�� :%d \n", sizeof(a));
	printf("double�� ������ ũ�� :%d \n", sizeof(b));
	printf("������ ����� ũ�� :%d \n", sizeof(10));
	printf("���� ��� ũ�� :  %d \n", sizeof(3.14 + 1.56));
	printf("char �ڷ����� ũ�� :%d \n", sizeof(char));
	printf("long double �ڷ����� ũ�� : %d \n", sizeof(long double));
	
	system("pause");
	return 0;
}