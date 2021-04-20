/*
    Computing average, max and min from a file.
    by JL
    18.02.2021
*/

#include <stdio.h>
#include <stdlib.h>

void Read_To_Array(FILE* ptr, int data[], int* n)
{
    //TODO: Read file into an array, and get the size;
    *n=0;
    while((fscanf(ptr,"%d",&data[*n]))==1)
    {
        (*n)++;
    }
}

int GetMax(int data[], int n)
{
    //TODO: Get max value from an array.
    int max=data[0];
    int i=0;
    while(i<n)
    {
        if(data[i]>max)
        {
            max=data[i];
        }
        i++;
    }
    return max;
}

double GetAverage(int data[], int n)
{
    //TODO: Get an average value from an array.
    int sum=0, i=0;
    while(i<n)
    {
        sum+=data[i];
        i++;
    }
    return sum/n;
}

int GetMin(int data[], int n)
{
    //TODO: Get min value from an array.
    int min=data[0];
    int i=0;
    while(i<n)
    {
        if(data[i]<min)
        {
            min=data[i];
        }
        i++;
    }
    return min;
}

void Write_To_File(FILE* ptr, int value, char data[])
{
    //TODO: Write to the file.
    fputs(data,ptr);
    fprintf(ptr,"%d",value);
    putc('\n',ptr);
}

void Test_File()
{
    //TODO: Do file oprations.
    int data[30];
    int n;
    FILE* inPtr;
    FILE* outPtr;
    inPtr=fopen("scores.txt","r");
    outPtr=fopen("answer-hw3.txt","w");
    Read_To_Array(inPtr,data,&n);
    Write_To_File(outPtr,GetMax(data,n),"MAX: ");
    Write_To_File(outPtr,GetMin(data,n),"MIN: ");
    Write_To_File(outPtr,GetAverage(data,n),"AVG: ");
    fclose(inPtr);
    fclose(outPtr);
}

int main(void)
{
    //TODO: Perform operations.
    Test_File();
    return 0;
}