/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 메인함수
int main(void) 
{
	
    /*FILE* ifp, * ofp;
    char str[80];
    char* res;

    ifp = fopen("aa.txt", "r");
    if (ifp == NULL)
    {
        printf("파일오픈 실패\n");
        return EXIT_FAILURE;
    }
    ofp = fopen("bb.txt", "w");
    if (ofp == NULL)
    {
        printf("파일생성 실패\n");
        return EXIT_FAILURE;
    }

    while (1)
    {
        res = fgets(str, sizeof(str), ifp);
        if (res == NULL)
        {
            break;
        }
        str[strlen(str) - 1] = '\0';
        fputs(str, ofp);
        fputs(" ",ofp);
    }

    fclose(ifp);
    fclose(ofp);*/

    FILE* ifp, * ofp;
    char name[20];
    int kor, eng, math, res, total;
    double avg;
   
    ifp = fopen("aaa.txt", "r");
    if (ifp == NULL)
    {
        printf("파일오픈 실패\n");
        return EXIT_FAILURE;
    }

    ofp = fopen("bbb.txt", "w");
    if (ofp == NULL)
    {
        printf("파일오픈 실패\n");
        return EXIT_FAILURE;
    }

    while (1)
    {
        res = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &math);
        if(res==EOF)
        {
            break;
        }
        total = kor + eng + math;
        avg = total / 3.0;
        fprintf(ofp, "%s%5d%7.1lf\n", name, total, avg);
    }

    fclose(ifp);
    fclose(ofp);

	system("pause");
	return EXIT_SUCCESS;
}