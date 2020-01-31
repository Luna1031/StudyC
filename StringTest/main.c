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

	printf("딸기 :%s \n", fruit);
	printf("딸기잼 :%s %s \n", fruit, "jam");

	strcpy(fruit, "banana");
	printf("다음 과일 :%s \n", fruit);
	printf("\n");
	printf("\n");
	printf("\n");

	
	int age;
	double height;

	printf("나이와 키를 입력하세요 :");
	scanf("%d %lf", &age, &height);
	printf("나이는 %d살, 키는 %.1lfcm입니다. \n", age, height);
	printf("\n");
	printf("\n");
	printf("\n");

	
	char grade;
	char name[20];
	getchar();

	printf("학점 입력 :");
	scanf("%c", &grade);
	printf("이름 입력 :");
	scanf("%s", name);
	printf("%s의 학점은 %c입니다.", name, grade);


	system("pause");
	return 0;
}