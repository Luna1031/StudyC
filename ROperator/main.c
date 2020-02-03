#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif //_MSC_VER

#include<stdio.h>
#include<stdlib.h>

int main()
{
	//type here

	int a = 10;
	int res;

	res = (a > 10) && (a < 20);
	printf("(a > 10)&&(a < 20) :%d \n", res);
	res = (a < 10) || (a > 20);
	printf("(a < 10)||(a > 20) :%d \n", res);
	res = (a <= 10) && (a < 20);
	printf("(a <= 10)&&(a < 20) :%d \n", res);
	res = (a > 10) || (a < 20);
	printf("(a > 10)||(a < 20) :%d \n", res);
	res = !(a >= 30);
	printf("!(a >= 30) :%d \n", res);

	system("pause");
	return 0;
}