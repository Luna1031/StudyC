/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 구조체, 사용자 정의 Structure
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

// 메인함수
int main(void) 
{
	/*
    struct student s1;

    s1.num = 2;
    s1.grade = 3.0;

    printf("학번 :%d \n", s1.num);
    printf("학점 :%.1lf \n", s1.grade);*/
    /*
    struct profile yeny;
    strcpy(yeny.name, "이예은");
    yeny.age = 28;
    yeny.height = 159.8;

    yeny.intro = (char*)malloc(90);
    printf("자기소개 :");
    gets(yeny.intro);
    printf("\n");

    printf("이름 :%s \n", yeny.name);
    printf("나이 :%d \n", yeny.age);
    printf("신장 :%.1lf \n", yeny.height);
    printf("소개 :%s \n", yeny.intro);

    free(yeny.intro);
    */
    /*
    struct student p1;

    p1.pf.age = 20;
    p1.pf.height = 167.8;
    p1.id = 315;
    p1.grade = 3.2;

    printf("나이 :%d \n",p1.pf.age);
    printf("신장 :%.1lf \n",p1.pf.height);
    printf("학번 :%d \n",p1.id);
    printf("학점 :%.1lf \n",p1.grade);
    */
    
    struct student
        s1 = { 315,"홍길동",2.4 },
        s2 = { 316,"이순신",3.7 },
        s3 = { 317,"세종",4.4 };

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

    printf("학번 :%d \n", max.id);
    printf("이름 :%s \n", max.name);
    printf("학점 :%.1lf \n", max.grade);



	system("pause");
	return EXIT_SUCCESS;
}