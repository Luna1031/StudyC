#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif //_MSC_VER

#include<stdio.h>
#include<stdlib.h>

int main()
{
	//type here
	printf("%d \n", 10);
	printf("%lf \n", 3.4);
	printf("%.1lf \n", 3.45);
	printf("%.10lf \n", 3.4);

	printf("%d과 %d의 합은 %d입니다. \n", 10, 20, 10 + 20);
	printf("%.1lf-%.1lf=%.1lf \n", 3.4, 1.2, 3.4 - 1.2);

	printf("%.10lf \n", 1e4);
	printf("%.10lf \n", 3.14e-4);
	printf("%le \n", 0.00000314);
	printf("%.2le \n", 0.00000314);

	system("pause");
	return 0;
}