/*
    Cacluate square of number
    by JŁ
    7.12.2020
*/

#include <stdio.h>
#include <math.h>

float CalculateSquare(float value)
{
    return sqrt(value);
}

int main(void)
{
    float value;

    printf("Enter value: ");
    scanf("%f",&value);
    printf("Result: %f",CalculateSquare(value));

    return 0;
}