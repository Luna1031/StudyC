/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(int argc, char **argv) 
{
    if (argc <= 1)
    {
        printf("��ɱ����� �ùٸ����ʽ��ϴ�. \n");
        exit(1);
    }

    char* intarg[2];
    int j = 0;


    for (int i = 0; i < argc; i++)
    {
        if(i==0)
        {
            continue;
        }
        intarg[j] = (char*)malloc(strlen(argv[i]) + 1);
        strcpy(intarg[j], argv[i]);
        j++;
    }

    printf("ù�� ° ����μ� %s \n", intarg[0]);
    printf("�ι� ° ����μ� %s \n", intarg[1]);

   
	system("pause");
	return EXIT_SUCCESS;
}