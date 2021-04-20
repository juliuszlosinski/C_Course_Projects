#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char name[20];
    char lastName[20];
    double age;
}Person;

void CheckSize()
{
    long long int x=5;
    printf("Size of x: %d",sizeof(x));
}

void CheckArray()
{
    int n=5;
    int *p=(int*)malloc(n*sizeof(int));
    int i=0;
    while(i<n)
    {
        *p=i*2;
        p++;
        i++;
    }
    p-=n;
    for(int i=0;i<n;i++)
    {
        printf("%d ",*p);
        p++;
    }
}

int main(void)
{
    CheckArray();
    return 0;
}