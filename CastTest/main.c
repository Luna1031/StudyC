#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif //_MSC_VER

#include<stdio.h>
#include<stdlib.h>

int main()
{
	//type here

	int a = 20, b = 3;
	double res;
	short sh;
	int in = 2147483647;

	res = ((double)a / (double)b);
	printf("res = %.1lf \n", res);

	a = res;
	printf("(int)%.lf의 결과 = %d \n", res, a);

	sh = in; //작은 타임에 더 큰 타입의 수를 넣어서 담을 수 없음
	printf("%d, %d  \n", sh, in);


	system("pause");
	return 0;
}