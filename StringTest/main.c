#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif //_MSC_VER

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	//type here
	
	char fruit[20] = "strawbwrry";

	printf("���� :%s \n", fruit);
	printf("������ :%s %s \n", fruit, "jam");

	strcpy(fruit, "banana");
	printf("���� ���� :%s \n", fruit);
	printf("\n");
	printf("\n");
	printf("\n");

	
	int age;
	double height;

	printf("���̿� Ű�� �Է��ϼ��� :");
	scanf("%d %lf", &age, &height);
	printf("���̴� %d��, Ű�� %.1lfcm�Դϴ�. \n", age, height);
	printf("\n");
	printf("\n");
	printf("\n");

	
	char grade;
	char name[20];
	getchar();

	printf("���� �Է� :");
	scanf("%c", &grade);
	printf("�̸� �Է� :");
	scanf("%s", name);
	printf("%s�� ������ %c�Դϴ�.", name, grade);


	system("pause");
	return 0;
}