/*
    Printing array using reference and recursion
    by JŁ
    6.12.2020
*/

#include <stdio.h>

void PrintArray(int *adr, int i, int n)
{
    if(i>=n)
    {
        return;
    }
    else
    {
        printf("%d ",*adr);
        adr++;
        i++;
        PrintArray(adr,i,n);
    }
}

int main(void)
{
    int array[5]={1,2,3,4,5};
    PrintArray(array,0,5);
    return 0;
}