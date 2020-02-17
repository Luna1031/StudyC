/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.14
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct nc
{
	int num;
	char name[20];
	int tel;
	char mail[30];
} nc;

void input_business_card(nc* n);
void show_all_cards(nc* n);
void search_business_card(int num);
void edit_business_card();

// 메인함수
int main(void)
{
	nc arr[50] = { 1, };

	int menu;

	printf("<Menu> \n 1.입력 \n 2.수정 \n 3.삭제 \n 4.전체출력 \n 5.검색 \n 6.종료 \n =>");
	scanf("%d", &menu);

	if (menu == 6)
	{
		system("pause");
		return EXIT_SUCCESS;
	}

	while (1)
	{
		switch (menu)
		{
		case 1:
			input_business_card(arr);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			show_all_cards(arr);
			break;
		case 5:
			break;
		}
		
		printf("<Menu> \n 1.입력 \n 2.수정 \n 3.삭제 \n 4.전체출력 \n 5.검색 \n 6.종료 \n =>");
		scanf("%d", &menu);
		
		if (menu == 6)
		{
			break;
		}
	}
	system("pause");
	return EXIT_SUCCESS;
}

void input_business_card(nc* n)
{
	int num = n->num;

	printf("─────────────────────────\n");
	printf("명함번호 :%d \n", num);
	printf("한글이름 :");
	scanf("%s", n[num].name);
	printf("전화번호 :");
	scanf("%d", &n[num].tel);
	printf("메일주소 :");
	scanf("%s", n[num].mail);
	printf("─────────────────────────\n");

	n->num++;
}

void show_all_cards(nc* n)
{
	int num = n->num;

	if (n[num].name != NULL)
	{
		for (int i = 1; i <= num; i++)
		{
			printf("─────────────────────────\n");
			printf("명함번호 :%d \n", num);
			printf("한글이름 :%s \n", n[num].name);
			printf("전화번호 :%d \n", n[num].tel);
			printf("메일주소 :%s \n", n[num].mail);
			printf("─────────────────────────\n");
		}
	}
}

void search_business_card(int num)
{
	
}

void edit_business_card()
{

}