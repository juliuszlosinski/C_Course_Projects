/*
    Calculate the sine of value between 0 and 1 (non inclusive)
    by JL
    12.12.2020
*/

#include <stdio.h>
#include <math.h>

void CalculateSine(double value)
{
    if(value > 0 && value < 1)
    {
        printf("Sine of %lf is %lf",value,sin(value));
    }
    else
    {
        printf("Input value is not between 0 and 1!");
    }
}

double GetValue()
{
    double value;
    printf("Enter value: ");
    scanf("%lf",&value);
    return value;
}

int main(void)
{
    CalculateSine(GetValue());
    return 0;
}