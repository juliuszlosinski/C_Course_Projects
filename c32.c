#include <stdio.h>

void Swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void Add(int *a, int *b)
{
    *a = *a + *b;
}



int GetMax(int *ptr, int n)
{
    int i=0, max = *ptr;
    ptr++;
    while(i<n)
    {
        if(max<*(--ptr))
            max=*ptr;
        ptr++;
        i++;
    }
    return max;
}

void Sort(int data[], int n)
{
    for(int i=0;i<n;i++)
        for(int j=1;j<n;j++)
            if(data[j-1]>data[j])
                Swap(&data[j-1],&data[j]);
}

void InsertSort(int data[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(data[i]<data[j])
            {
                Swap(&data[i],&data[j]);
            }
        }
    }
}

void GetInfo(int *arr, int n)
{
    int sum=0;
    for(int i=0;i<n;i++, arr++)
    {
        sum+=*arr;
        printf("\nAddress: %p\nValue: %d\n",arr,*arr);
    }
    arr-=n;
    printf("\nAvarage: %d\n",sum/n);
}

void Test()
{
    int y = 25;
    int *p = &y;
    *p=20;
    int a = 10, b =15;
    Swap(&a,&b);
    Add(&a,&b);
    printf("Address: %p\nValue: %d\n",a,a);

    int arr[8]={10,3,6,20,5,10,15,4};
    InsertSort(arr,8);
    GetInfo(arr,8);
}

int main(void)
{ 
    Test();
    return 0;
}