/*
    Converts fahrenheit to celcius
    by JŁ
    6.12.2020
*/

#include <stdio.h>

int main(void)
{
    int fahrenheit;
    double celcius;

    printf("Enter a fahrenheit value: ");
    scanf("%d",&fahrenheit);

    celcius=(fahrenheit-32)/1.8;
    printf("%d is in celcius %2.2lf",fahrenheit,celcius);

    return 0;
}