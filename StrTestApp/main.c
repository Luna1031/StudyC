/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - Ye Eun Lee
  */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �����Լ�
int main(void)
{   /*
	printf("apple�� ����� ���� �ּҰ� :%p \n","apple");
	printf("�� ��° ������ �ּҰ� :%p \n","apple" + 1);
	printf("ù ��° ���� :%c \n", *"apple");
	printf("�� ��° ���� :%c \n", *("apple" + 1));
	printf("�迭�� ǥ���� �� ��° ���� :%c \n", "apple"[2]);
	*/
	/*
	char *dessert = "apple";
	printf("���� �Ľ��� %s�Դϴ�. \n", dessert);
	dessert = "banana";
	printf("���� �߽��� %s�Դϴ�. \n", dessert);
	*/
	/*
	char str[80];

	printf("���ڿ� �Է� :");
	gets(str);
	printf("�Է��� ���ڿ��� :%s \n", str);
	*/
	/*
	char str[80];

	printf("���ڿ� �Է� :");
	fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = '\0';
	printf("�Էµ� ���ڿ��� %s�Դϴ�. \n", str);
	*/
	/*
	int age;
	char name[20];

	printf("�����Է� :");
	scanf("%d", &age);

	getchar();

	printf("�̸��Է� :");
	gets(name);
	printf("���� :%d, �̸� :%s \n", age, name);
	*/
	/*
	char str[80] = "apple juice";
	char* ps = "banana";

	puts(str);
	fputs(ps, stdout);
	puts("milk");
	*/
	/*
	int i = 0;
	char str[20];
	char ch;

	do {
		ch = getchar();
		str[i] = ch;
		i++;
	} while (ch != '\n');

	str[i] = '\0';

	*/
	/*
	char str1[80] = "strawberry";
	char str2[80] = "apple";
	char* ps1 = "banana";
	char* ps2 = str2;

	printf("���� :%s \n", str1);
	strcpy(str1, str2);
	printf("�ٲ� :%s \n", str1);

	strcpy(str1, ps1);
	printf("�� �ٲ� :%s \n", str1);

	strcpy(str1, ps2);
	printf("�� �� �ٲ� :%s \n", str1);

	strcpy(str1, "banana");
	printf("�� �ٲ� :%s \n", str1);
	*/
	/*
	char str[80] = "mango tree";

	strncpy(str, "apple-pie", 6);

	printf("%s \n", str);
	*/
	/*
	char str[80] = "straw";

	strcat(str, "berry");
	printf("%s \n", str);
	strncat(str, "piece", 3);
	printf("%s \n", str);
	*/
	/*
	char str1[80], str2[80];
	char* resp = "";

	printf("2���� ���� �̸� �Է� :");
	scanf("%s %s", str1, str2);

	printf("���ϸ� :%s, %s \n", str1, str2);

	if (strlen(str1) > strlen(str2))
	{
		resp = str1;
		printf("�� �� �ܾ� :%s \n", resp);
	}
	else if (strlen(str1) == strlen(str2))
	{
		printf("%s�� %s�� ���̰� �����ϴ�. \n", str1, str2);
	}
	else
	{
		resp = str2;
		printf("�� �� �ܾ� :%s \n", resp);
	}
	*/
	/*
	char str1[80] = "paer";
	char str2[80] = "peach";

	printf("������ ���߿� ������ ���� :");
	if (strcmp(str1, str2) > 0)
	{
		printf("%s \n", str1);
	}
	else
	{
		printf("%s \n", str2);
	}
	*/







	system("pause");
	return EXIT_SUCCESS;
}