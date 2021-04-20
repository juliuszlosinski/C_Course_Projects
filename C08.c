/*
    Testing storage classes
    by JŁ
    6.11.2020
*/

#include <stdio.h>

int third=20;

int main(void)
{
    auto int first;
    register int second=5;
    extern int third;

    scanf("%d",&first);
    printf("\nFirst value: %d\nSecond value: %d\nThird value: %d",first,second,third);

    return 0;
}