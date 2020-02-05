#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif //_MSC_VER

#include<stdio.h>
#include<stdlib.h>

int main()
{
	//type here

	int chest = 0;
	char size;

	printf("가슴둘레 입력 :");
	scanf("%d", &chest);

	if (chest <= 90)
	{
		size = 'S';
	}
	else if (chest > 90 && chest <= 100)
	{
		size = 'M';
	}
	else
	{
		size = 'L';
	}

	printf("Size :%c \n", size);


	system("pause");
	return 0;
}