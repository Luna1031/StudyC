/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �����Լ�
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

    printf("���� ���ڿ� :%s \n", str1);
    printf("���ڿ� �Է� :");
    scanf("%s", str1);
    printf("�Է� �� ���ڿ� : %s \n", str1);
    */

    char str[80];
    printf("���ڿ� �Է� :");
    gets(str);
    printf("���ڿ� ��� :");
    puts(str);


	system("pause");
	return EXIT_SUCCESS;
}