/*
    Sin and cos operations
    By JL
    12.02.2021
*/

#include <stdio.h>
#include <math.h>

void PrintSinCos()
{
    //TODO: Print the values of sin and cos <0,1>
    short i=0, MAX = 10;
    printf("\n[------Values-----]\n");
    while(i<=MAX)
    {
        float pheta = i/10.0;
        printf("\nSin(%0.3f) = %0.3f\n", pheta, sin(pheta)); // Printing the values.
        printf("Cos(%0.3f) = %0.3f\n", pheta, cos(pheta));
        i++;
    }
    printf("\n[-----------------]\n");
}

int main(void)
{
    //TODO: Do all required operations.
    PrintSinCos();
    return 0;
}