/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, ����ü, ������
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>
#include <String.h>

union student
{
    int num;
    double grade;
};

enum season
{
    SPRING,
    SUMMER,
    FALL,
    WINTER
};
    
// �����Լ�
int main(void) 
{

   /* union student s1 = { 315 };

    printf("�й� :%d \n", s1.num);
    s1.grade = 4.4;
    printf("���� :%.1lf \n", s1.grade);
    printf("�й� :%d \n", s1.num);*/

    enum season ss;
    char* pc = NULL;

    ss = SPRING;

    switch (ss)
    {
    case SPRING:
        pc = "inline";
        break;
    case SUMMER:
        pc = "swimming";
        break;
    case FALL:
        pc = "trip";
        break;
    case WINTER:
        pc = "skiing";
        break;
    default:
        pc = "error";
        break;
    }
    printf("���� ���� Ȱ�� =>%s \n", pc);



	system("pause");
	return EXIT_SUCCESS;
}