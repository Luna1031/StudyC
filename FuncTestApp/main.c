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

//int sum(int x, int y);
//void printf_char(char ch, int count);
//void fruit(void);
int factorial(int count);

// 메인함수
int main(void) 
{
    /*
    int a = 10, b = 20;
    int res;

    res = sum(a, b);
    printf("result :%d \n", res);


	system("pause");
	return EXIT_SUCCESS;
    */
    /*
    printf_char('@', 5);
    printf("\n");
    */


    //fruit(1);

    int res = factorial(10);
    printf("result = %d \n",res);


    system("pause");
    return EXIT_SUCCESS;
    
}
/*
//합계 함수
int sum(int x, int y)
{
    int temp;
    temp = x + y;

    return temp;
}
*/
/*
void print_char(char ch, int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%c", ch);
    }
    return;
}
*/
/*
void fruit(int count)
{
    printf("apple \n");

    if (count == 3)
    {
        return;
    }
    
    fruit(count+1);
}
*/

int factorial(int count)
{
    if (count == 1)
    {
        return 1;
    }
    return count * factorial(count - 1);
}