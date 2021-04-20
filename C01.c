/*
    Simple calculator
    by JŁ
    6.12.2020
*/

#include <stdio.h>

int main(void)
{

    float x,y,res;
    int dec;
    printf("Enter first value: ");
    scanf("%f",&x);
    printf("Enter second value: ");
    scanf("%f",&y);
    printf("Enter decision:  [Add-0] [Diff-1] [Multi-2] [Div-3]\n");
    scanf("%d",&dec);

    if(dec==0)
    {
        res=x+y;
    }
    else if(dec==1)
    {
        res=x-y;
    }
    else if(dec==2)
    {
        res=x*y;
    }
    else if(dec==3)
    {
        res=x/y;
    }

    printf("Result: %4.4f",res);
    return (0);
}