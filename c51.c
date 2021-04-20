#include <stdio.h>
#include <stdlib.h>

void Read(FILE* ptr, int data[], int* n)
{
    //TODO: Read date from to file to an array.
    *n=0;
    while(fscanf(ptr,"%d",&data[*n])==1)
    {
        (*n)++;
    }
}

void Print(int data[], int n)
{
    //TODO: Print data from array.
    int i=0;
    while(i<n)
    {
        printf("\n%d\n",data[i]);
        i++;
    }
}

void Test_File()
{
    //TODO: Test file;
    int data[20]={};
    int size;
    FILE* ptr;
    ptr=fopen("scores.txt","r");
    Read(ptr,data,&size);
    Print(data,size);
}

int main(void)
{
    //TODO: Do operations.
    Test_File();
    return 0;
}