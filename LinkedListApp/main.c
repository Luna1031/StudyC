/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 구조체 연결 리스트
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct list
{
    int num;
    struct list* next;
};
// 메인함수
int main(void) 
{
	
    struct list a = { 10,0 }, b = { 20,0 }, c = { 30,0 };
    struct list *head = &a, * current;

    a.next = &b;
    b.next = &c;

    // 값, 주소확인
   /* printf("%d \n", a.num);
    printf("%u \n", &a);
    printf("%u \n", &a.next);
    printf("%u \n", &b.num);
    printf("%d \n", b.num);
    printf("%u \n", &b.next);
    printf("%u \n", &b); 
    printf("%u \n", &c.num);
    printf("%d \n", c.num);
    printf("%u \n", &c.next);
    printf("%u \n", &c);*/
    
    printf("head->num :%d \n", head->num);
    printf("head->next->num :%d \n", head->next->num);

    printf("list all :");
    current = head;

    while (current != NULL)
    {
        printf("%d ", current->num);
        current = current->next;
    }
    printf("\n");


	system("pause");
	return EXIT_SUCCESS;
}