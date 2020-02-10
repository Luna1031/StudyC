/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 파일오픈
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{

    /*FILE* fp;
    char str[] = "banana";
    int i = 0, ch;

    fp = fopen("b.txt", "w");

    if (fp == NULL)
    {
        printf("파일생성 실패\n");
        return EXIT_FAILURE;
    }

    while(str[i]!='\0')
    {
        fputc(str[i], fp);
        i++;
    }
   
    fputc('\n',fp);
    fclose(fp);*/

    /*int ch;

    while (1)
    {
        ch = fgetc(stdin);
        if(ch==EOF)
        {
            break;
        }
        fputc(ch, stdout);
    }*/

    /*FILE* fp;
    int ary[10] = { 13,10,13,13,10,26,13,10,13,10 };
    int res;

    fp = fopen("c.txt", "wb");
    for (int i = 0; i < 10; i++)
    {
        fputc(ary[i], fp);
    }
    fclose(fp);

    fp = fopen("c.txt", "rt");
    while (1)
    {
        res = fgetc(fp);
        if (res == EOF)
        {
            break;
        }
        printf("%4d", res);
    }
    printf("\n");
    fclose(fp);*/

    /*FILE* fp;
    char str[20];

    fp = fopen("d.txt", "a+");
    if (fp == NULL)
    {
        printf("파일오픈 실패\n");
        return 1;
    }

    while (1)
    {
        printf("과일 이름 :");
        scanf("%s", str);
        if (strcmp(str, "end") == 0)
        {
            break;
        }

        else if (strcmp(str, "list") == 0)
        {
            fseek(fp, 0, SEEK_SET);
            while (1)
            {
                fgets(str, sizeof(str), fp);
                if (feof(fp))
                {
                    break;
                }
                printf("%s", str);
            }
        }
        
        else
        {
            fprintf(fp, "%s \n", str);
        }
       
    }
    fclose(fp);*/

    
    FILE* afp, * bfp;
    int num = 10;
    int res = 0;

    afp = fopen("a.txt", "wt");
    /*if (afp == NULL)
    {
        return EXIT_FAILURE;
    }*/
    fprintf(afp, "%d", num);

    bfp = fopen("b.txt", "wb");
    /*if (bfp == NULL)
    {
        return EXIT_FAILURE;
    }*/
    fwrite(&num, sizeof(num), 1, bfp);

    fclose(afp);
    fclose(bfp);

    bfp = fopen("b.txt", "rb");
    fread(&res, size(res), 1, bfp);
    printf("%d", res);

    fclose(bfp);


	system("pause");
	return EXIT_SUCCESS;
}