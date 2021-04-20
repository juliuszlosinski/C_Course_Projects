#include <stdio.h>
#include <math.h>

void ChangeValue(float *input)
{
    float value=1.5e-5;
    *input=value;
}

void PrintValue(float input)
{
    printf("Value: %.3e",input);
}

int main(void)
{
    float value;
    printf("Enter a value: ");
    scanf("%f",&value);
    ChangeValue(&value);
    PrintValue(value);
    return 0;
}