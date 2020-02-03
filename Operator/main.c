#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif //_MSC_VER

#include<stdio.h>
#include<stdlib.h>

int main()
{
	//type here


	int a = 10, b = 10;
	++a;
	--b;

	printf("%d \n", a);
	printf("%d \n", b);
	printf("\n");
	printf("\n");
	printf("\n");


	a = 5;
	b = 5;

	int pre, post;

	pre = (++a) * 3;
	post = (b++) * 3;

	printf("초깃값 a :%d, b :%d \n", a, b);
	printf("전위형 :%d, 후위형 :%d \n", pre, post);

	system("pause");
	return 0;
}