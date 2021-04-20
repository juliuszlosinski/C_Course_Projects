/*
    Setting ang printing array created by function malloc
    by JŁ
    8.12.2020
*/

#include <stdio.h>
#include <stdlib.h>

void PrintArray(int*adr,int i,int n)
{
   if(i<n)
   {
     printf("%d ",*adr);
     i++;
     adr++;
     PrintArray(adr,i,n);
   }
   else
   {
       free(adr);
   }
}

void TestMalloc()
{
    int n;
    printf("Enter size: ");
    scanf("%d",&n);
    int *pr=(int*)malloc(n*sizeof(int));

    int i=0;
    while(i<n)
    {
        int value;
        printf("Enter value: ");
        scanf("%d",&value);
        *pr=value;
        pr++;
        i++;
    }
    pr-=i;

    PrintArray(pr,0,n);
}

int main(void)
{
    TestMalloc();
    return 0;
}