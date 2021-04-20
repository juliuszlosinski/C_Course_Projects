/*
    Calculates area of circle
    by JŁ
    6.12.2020
*/

#include <stdio.h>

#define PI 3.14

int main(void)
{
    double radius,area;

    printf("Enter radius: ");
    scanf("%lf",&radius);

    area=PI*radius*radius;

    printf("Area: %2.2lf",area);

    return 0;
}