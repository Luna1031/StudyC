/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    /*
    char small, cap = 'G';

    if ((cap >= 'A') && (cap <= 'Z'))
    {
        small = cap + ('a' - 'A'); //32
    }

    printf("대문자 :%c \n", cap);
    printf("소문자 :%c \n", small);
    */
    /*
    char ch1, ch2;

    scanf("%c %c", &ch1, &ch2);

    printf("%u %u\n", ch1, ch2);
    */
    /*
    char ch;
    ch = getchar();

    printf("출력 문자 :");
    putchar(ch);
    putchar('\n');
    //printf("\n");
    */
    /*
    char ch;

    for (int i = 0; i < 3; i++)
    {
        scanf("%c", &ch);
        printf("%c", ch);
    }
    putchar('\n');
    printf("%c", ch);
    putchar('\n');
    */
    /*
    char ch;

    while (1)
    {
        scanf("%c", &ch);
        if (ch == '\n')
        {
            break;
        }
        printf("%c", ch);
    }
    printf("\n");
    */
    /*
    int res;
    char ch;

    while (1)
    {
        res = scanf("%c", &ch);
        if (res == -1)
        {
            break;
        }
        printf("%d \t", ch);
    }
    */

    int num, grade;

    printf("학번 입력 :");
    scanf("%d", &num);
    //getchar();
    printf("학점 입력 :");
    scanf("%d", &grade);
    grade = getchar();
    printf("학번 :%d, 학점 :%c \n", num, grade);




	system("pause");
	return EXIT_SUCCESS;
}