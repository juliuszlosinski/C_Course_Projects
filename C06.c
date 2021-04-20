/*
    Calculate angles of trig. functions
    by JŁ
    6.12.2020
*/

#include <stdio.h>
#include <math.h>

#define PI 3.14

int main(void)
{
    int wave, kindOfInput;
    double angle,result;

    printf("Wave: SIN [0]  COS [1] TAN [2] CTAN [3]\n");
    scanf("%d",&wave);

    printf("Input: ANGLES [0] RADIANS [1]\n");
    scanf("%d",&kindOfInput);

    printf("Enter value: \n");
    scanf("%f",&angle);

    if(kindOfInput==0)
    {
        angle=(angle*PI)/180;
    }
    
    switch(wave)
    {
        case 0:
        result=sin(angle);
        printf("Sin: %lf",result);
        break;

        case 1:
        result=cos(angle);
        printf("Cos: %lf",result);
        break;

        case 2:
        result=sin(angle)*sin(angle)/cos(angle)*cos(angle);
        printf("Tangent: %lf",result);
        break;
        
        case 3:
        result=cos(angle)*cos(angle)/sin(angle)*sin(angle);
        printf("Cotangent: %lf",result);
        break;
    }

    return 0;
}