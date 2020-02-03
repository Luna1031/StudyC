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

	printf("int형 변수의 크기 :%d \n", sizeof(a));
	printf("double형 변수의 크기 :%d \n", sizeof(b));
	printf("정수형 상수의 크기 :%d \n", sizeof(10));
	printf("수식 결과 크기 :  %d \n", sizeof(3.14 + 1.56));
	printf("char 자료형의 크기 :%d \n", sizeof(char));
	printf("long double 자료형의 크기 : %d \n", sizeof(long double));
	
	system("pause");
	return 0;
}