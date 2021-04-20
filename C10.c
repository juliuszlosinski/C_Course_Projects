/*
    Reverse printing of an array by recursion
    by JŁ
    7.12.2020
*/

#include <stdio.h>

void ReversePrintArray(int *adr,int n)
{
    if(n==-1)
    {
        return;
    }  
    else
    {
        printf("%d ",*adr);
        adr++;
        n--;
        ReversePrintArray(adr,n);
    }
}

int main(void)
{
    int n=5;
    int array[5]={2,4,8,16,32};
    ReversePrintArray(array,n-1);
    return 0;
}