/*
    Testing conditional operator
    by JŁ
    6.12.2020
*/

#include <stdio.h>

int main(void)
{
    int first,second,third,fourth;

    scanf("%d %d",&first,&second);

    (first>second)?(printf("First is bigger than second!")): (printf("Second is bigger than first!"));

    third=(first<second)?(5):(10);

    fourth=(third>10)?(third*3):(third/3);

    printf("\nThird value: %d\nFourth value: %d",third,fourth);

    return 0;
}