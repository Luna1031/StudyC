/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, ����ü, ����� ���� Structure
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>

/*
struct student
{
    int num;
    double grade;
};

struct profile
{
    char name[20];
    int age;
    double height;
    char* intro;
};
*/
/*
struct profile
{
    int age;
    double height;
};

struct student
{
    struct profile pf;
    int id;
    double grade;
};
*/

struct student
{
    int id;
    char name[10];
    double grade;
};

// �����Լ�
int main(void) 
{
	/*
    struct student s1;

    s1.num = 2;
    s1.grade = 3.0;

    printf("�й� :%d \n", s1.num);
    printf("���� :%.1lf \n", s1.grade);*/
    /*
    struct profile yeny;
    strcpy(yeny.name, "�̿���");
    yeny.age = 28;
    yeny.height = 159.8;

    yeny.intro = (char*)malloc(90);
    printf("�ڱ�Ұ� :");
    gets(yeny.intro);
    printf("\n");

    printf("�̸� :%s \n", yeny.name);
    printf("���� :%d \n", yeny.age);
    printf("���� :%.1lf \n", yeny.height);
    printf("�Ұ� :%s \n", yeny.intro);

    free(yeny.intro);
    */
    /*
    struct student p1;

    p1.pf.age = 20;
    p1.pf.height = 167.8;
    p1.id = 315;
    p1.grade = 3.2;

    printf("���� :%d \n",p1.pf.age);
    printf("���� :%.1lf \n",p1.pf.height);
    printf("�й� :%d \n",p1.id);
    printf("���� :%.1lf \n",p1.grade);
    */
    
    struct student
        s1 = { 315,"ȫ�浿",2.4 },
        s2 = { 316,"�̼���",3.7 },
        s3 = { 317,"����",4.4 };

    struct student max;

    max = s1;
    if (s2.grade > max.grade)
    {
        max = s2;
    }
    if (s3.grade > max.grade)
    {
        max = s3;
    }

    printf("�й� :%d \n", max.id);
    printf("�̸� :%s \n", max.name);
    printf("���� :%.1lf \n", max.grade);



	system("pause");
	return EXIT_SUCCESS;
}