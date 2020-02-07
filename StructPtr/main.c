/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 구조체 포인터
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct score
{
	int kor;
	int eng;
	int math;
};

struct address
{
	char name[10];
	int age;
	char tel[20];
	char addr[80];
};

void print_list(struct address* l);

// 메인함수
int main(void)
{
	/*
	struct score yeny = { 70,80,90 };
	struct score* ps = &yeny;

	printf("국어 :%d \n", (*ps).kor);
	printf("영어 :%d \n", ps->eng);
	printf("수학 :%d \n", ps->mat/h);*/

	struct address list[5] = {
		{"홍길동",23,"111-1111","울릉도 독도"},
		{"이순신",35,"222-2222","서울 건천동"},
		{"장보고",19,"333-3333","완도 청해진"},
		{"유관순",15,"444-4444","충남 천안"},
		{"안중근",45,"555-5555","황해도 해주"}
	};

	print_list(list);

	system("pause");
	return EXIT_SUCCESS;
}

void print_list(struct address* list)
{
	for (int i = 0; i < 5; i++)
	{
		printf("%10s %5d %15s %20s \n",
			(list+i)->name, list[i].age, (list+i)->tel, (*(list+i)).addr);
	}
}