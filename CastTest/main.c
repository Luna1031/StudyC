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
	printf("(int)%.lf�� ��� = %d \n", res, a);

	sh = in; //���� Ÿ�ӿ� �� ū Ÿ���� ���� �־ ���� �� ����
	printf("%d, %d  \n", sh, in);


	system("pause");
	return 0;
}