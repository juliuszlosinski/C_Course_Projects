#include <stdio.h>
#include <stdlib.h>

void PrintArray(int*adr,int n)
{
    if(n==0)
    {
        return;
    }
    else
    {
        printf("%d ",*adr);
        adr++;
        n--;
        PrintArray(adr,n);
    }
}

void CreateAndPrintArray()
{
    int size=0;
    printf("Enter a size of an array: ");
    scanf("%d",&size);

    int *adr=(int*)malloc(size*sizeof(int));

    printf("Enter values: ");
    int i=0;
    while(i<size)
    {
        int value;
        scanf("%d",&value);
        *adr=value;
        adr++;
        i++;
    };
    adr-=i;

    PrintArray(adr,size);
    free(adr);
}

int main(void)
{
    CreateAndPrintArray();
    return 0;
}