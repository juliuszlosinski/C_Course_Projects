#include <stdio.h>

//REGION: PROTOTYPES
float Add(float,float);
float Sub(float,float);
float Mul(float,float);
float Div(float,float);
//END REGION

void Calc()
{
    //TODO: Calc the params
    float a,b;
    printf("Enter value: \n");
    scanf("%f",&a);
    scanf("%f",&b);
    printf("Adding: %0.2f\nSubtracking: %0.2f\nMultiplying %0.2f\nDividing: %0.2f\n",Add(a,b),Sub(a,b),Mul(a,b),Div(a,b));
}

int main(void)
{
    //TODO: Do operations.
    Calc();
    return 0;
}