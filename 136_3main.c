#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif //_MSC_VER

#include<stdio.h>
#include<stdlib.h>

int main()
{
	double height = 179.5;
	double weight = 75.0;

	if (height >= 187.5 && weight < 80)
	{
		printf("OK \n");
	}
	else
	{
		printf("Cancel \n");
	}

	system("pause");
	return 0;
}