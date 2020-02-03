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
#include <string.h>

// 메인함수
int main(void) 
{
    /*
    int arr[100] = { 1,2,3,4,5,6,7,8,9,10 };

    for (int i = 0; i < 100; i++)
    {
        printf("%d \n", arr[i]);
    }
    */
    /*
    char str1[80] = "cat";
    char str2[80];

    strcpy(str1, "tiger");
    strcpy(str2, str1);
    printf("%s %s \n", str1, str2);

    printf("최초 문자열 :%s \n", str1);
    printf("문자열 입력 :");
    scanf("%s", str1);
    printf("입력 후 문자열 : %s \n", str1);
    */

    char str[80];
    printf("문자열 입력 :");
    gets(str);
    printf("문자열 출력 :");
    puts(str);


	system("pause");
	return EXIT_SUCCESS;
}