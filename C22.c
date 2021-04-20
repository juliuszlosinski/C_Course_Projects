
/*
    Get sum of elements from dynamicaly created an array of integers
    by JL
    14.12.2020
*/

#include <stdio.h>
#include <stdlib.h>

int SumOfElements(int*adr,int i,int n)
{
    if(i==n)
    {
        return 0;
    }
    else
    {
        return *adr + SumOfElements(++adr,++i,n);
    }
}

void CreateArrayAndPrintInfo()
{
    int n;
    printf("Enter size of an array: ");
    scanf("%d",&n);

    int *adr=(int*)malloc(n*sizeof(int));

    int i=0;
    while(i<n)
    {
        int value;
        printf("Enter value: ");
        scanf("%d",&value);
        *adr=value;
        adr++;
        i++;
    }
    adr-=i;
    int sum=SumOfElements(adr,0,n);

    printf("Sum: %d",sum);
}

int main(void)
{
    CreateArrayAndPrintInfo();
    return 0;
}