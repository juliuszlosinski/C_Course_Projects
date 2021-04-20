/*
    Converts angles <-> radians
    by JŁ
    6.12.2020
*/

#include <stdio.h>

#define PI 3.14

int main(void)
{
    double input, result;
    int dec;

    printf("INPUT: Angles [0] Radians[1]\n");
    printf("Enter decision: ");
    scanf("%d",&dec);
    printf("Enter value: ");
    scanf("%lf",&input);

    if(dec==0)
    {
        result=input*PI/180;
        printf("Radians: %lf",result);
    }
    else
    {
        result=input*180/PI;
        printf("Angle: %lf",result);
    }

    return 0;
}