/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, ����ü ���� ����Ʈ
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
// �����Լ�
int main(void) 
{
	
    struct list a = { 10,0 }, b = { 20,0 }, c = { 30,0 };
    struct list *head = &a, * current;

    a.next = &b;
    b.next = &c;

    // ��, �ּ�Ȯ��
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