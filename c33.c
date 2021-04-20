#include <stdio.h>

void Merge(int a[],int b[],int c[],int n)
{
    int i=0, j=0, k=0;

    while(i<n && j<n)
    {
        if(a[i]<b[j])
            c[k++]=a[i++];
        else
            c[k++]=b[j++];
    }
    while(i<n)
        c[k++]=a[i++];
    while(j<n)
        c[k++]=b[j++];
}

void MergeSort(int key[], int n)
{
    int d[n];

    for(int k=1; k<n; k*=2)
    {
        for(int j=0; j<n - k; j+=2*k)
        {
            Merge(key+j,key+j+k,d+j,k);
        }
        for(int j=0; j<n-k;j++)
        {
            key[j]=d[j];
        }
    }
}

int main(void)
{
    int data[]={5,4,3,0,10};
    MergeSort(data,5);
    for(int i=0;i<5;i++)
    {
        printf("%d, ",data[i]);
    }
    return 0;
}