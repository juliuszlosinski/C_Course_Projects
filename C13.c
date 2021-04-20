/*
    Dynamically creating an array 
    by JŁ
    8.12.2020
*/
#include <stdio.h>
#include <stdlib.h>

int FindMax(int*p, int n)
{
    int max=*p;
    for(int i=0;i<n;i++)
    {
        if(max<*p)
        {
            max=*p;
        }
        p++;
    }
    return max;
}

int FindMinn(int*adr,int i,int n,int min)
{
    if(i>=n)
    {
        return min;
    }
    else if(min > *adr)
    {
        FindMinn(adr,++i,n,*adr);
    }
    else
    {
        FindMinn(adr,++i,n,min);
    }
}

int FindMin(int*adr,int n)
{
    return FindMinn(adr,0,n,*adr);
}

void Test()
{
    int size;

    printf("Enter size: ");
    scanf("%d",&size);

    int *adr=(int*)malloc(size*sizeof(int));

    int i=0;
    while(i<size)
    {
        int value;
        printf("Enter value: ");
        scanf("%d",&value);
        *adr=value;
        adr++;
        i++;
    }
    adr-=i;

    printf("MAX: %d\n",FindMax(adr,size));
    printf("MIN: %d\n",FindMin(adr,size));
}

int main(void){
    Test();
    return 0;
}