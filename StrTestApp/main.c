/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - Ye Eun Lee
  */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 메인함수
int main(void)
{   /*
	printf("apple이 저장된 시작 주소값 :%p \n","apple");
	printf("두 번째 문자의 주소값 :%p \n","apple" + 1);
	printf("첫 번째 문자 :%c \n", *"apple");
	printf("두 번째 문자 :%c \n", *("apple" + 1));
	printf("배열로 표현한 세 번째 문자 :%c \n", "apple"[2]);
	*/
	/*
	char *dessert = "apple";
	printf("오늘 후식은 %s입니다. \n", dessert);
	dessert = "banana";
	printf("내일 추식은 %s입니다. \n", dessert);
	*/
	/*
	char str[80];

	printf("문자열 입력 :");
	gets(str);
	printf("입력한 문자열은 :%s \n", str);
	*/
	/*
	char str[80];

	printf("문자열 입력 :");
	fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = '\0';
	printf("입력된 문자열은 %s입니다. \n", str);
	*/
	/*
	int age;
	char name[20];

	printf("나이입력 :");
	scanf("%d", &age);

	getchar();

	printf("이름입력 :");
	gets(name);
	printf("나이 :%d, 이름 :%s \n", age, name);
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

	printf("최초 :%s \n", str1);
	strcpy(str1, str2);
	printf("바뀐 :%s \n", str1);

	strcpy(str1, ps1);
	printf("또 바뀐 :%s \n", str1);

	strcpy(str1, ps2);
	printf("또 또 바뀐 :%s \n", str1);

	strcpy(str1, "banana");
	printf("또 바뀐 :%s \n", str1);
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

	printf("2개의 과일 이름 입력 :");
	scanf("%s %s", str1, str2);

	printf("과일명 :%s, %s \n", str1, str2);

	if (strlen(str1) > strlen(str2))
	{
		resp = str1;
		printf("더 긴 단어 :%s \n", resp);
	}
	else if (strlen(str1) == strlen(str2))
	{
		printf("%s와 %s는 길이가 같습니다. \n", str1, str2);
	}
	else
	{
		resp = str2;
		printf("더 긴 단어 :%s \n", resp);
	}
	*/
	/*
	char str1[80] = "paer";
	char str2[80] = "peach";

	printf("사전에 나중에 나오는 과일 :");
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