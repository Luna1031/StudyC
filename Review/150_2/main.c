#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif //_MSC_VER

#include<stdio.h>
#include<stdlib.h>



int main()
{
	int n = 0;

	printf("�����Է� :");
	scanf("%d", &n);

	switch (n % 3) //3���� ������ �� �������� 0�̸� ����, 0�� �ƴϸ� ��
	{
	case 0:
		printf("���� \n");
		break;
	default :
		printf("�� \n");
		break;
	}

	system("pause");
	return 0;
}