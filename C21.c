/*
    Calculate the average of numbers
    by JL
    12.12.2020
*/

#include <stdio.h>
#include <stdlib.h>

void CreateArrayAndPrint()
{
    int size,sum=0;
    double avg;
    printf("Enter count of elements: ");
    scanf("%d",&size);

    int *adr=(int*)malloc(size*sizeof(int));

    int i=0;
    while(i<size)
    {
        printf("Enter value: ");
        int value;
        scanf("%d",&value);
        sum+=value;
        *adr=value;
        adr++;
        i++;
    }
    adr-=i;

    avg=sum/(double)size;
    printf("Average: %lf",avg);
}

int main(void)
{
    CreateArrayAndPrint();
    return 0;
}