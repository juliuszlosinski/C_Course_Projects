#include <stdio.h>



void GetInfo(int*ptr, int n)
{
    int i=0, sum=0;
    while(i<n)
    {
        printf("\nAddress: %p\nValue: %d\n",ptr,*ptr);
        sum+=*ptr;
        i++;
        ptr++;
    }
    printf("\nAvarage: %f",(float)sum/n);   
}

void Test()
{
    int a = 5;
    int *ptr = &a;
    *ptr = 20;
    printf("\na: %d\n",a);
    int data[5]={1,2,3,4,5};
    GetInfo(data,5);
}

int main(void)
{
    Test();
    return 0;
}