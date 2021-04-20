#include <stdio.h>
#include <stdlib.h>


int Get_Max(int array[], int size)
{
    //TODO: Get max value from an array.
    int i=0, max=array[0];
    while(i<size)
    {
        if(max<array[i])
        {
            max=array[i];
        }
        i++;
    }
    return max;
}

int Get_Min(int array[], int size)
{
    //TODO: Get min value from an array.
    int i=0, min=array[0];
    while(i<size)
    {
        if(min>array[i])
        {
            min=array[i];
        }
        i++;
    }
    return min;
}

void Read_To_Array(FILE* ptr, int array[], int* size)
{
    //TODO: Read values to an array.
    *size=0;
    while(fscanf(ptr,"%d",&array[*size])==1)
    {
        (*size)++;
    }
}

void Print_Array(int array[], int size)
{
    //TODO: Print an array.
    int i=0;
    while(i<size)
    {
        printf("\n%d\n",array[i]);
        i++;
    }
}


float Get_Avarage(int array[], int size)
{
    //TODO: Get avarage from array.
    int i=0;
    float sum=0;
    while(i<size)
    {
        sum+=array[i];
        i++;
    }
    return sum/size;
}

void Write_To_File(FILE* ptr1, FILE* ptr2)
{
    int c;
    while((c=getc(ptr1))!= EOF)
    {
        putc(c,ptr2);
    }    
}

void Print_File(FILE* ptr)
{
    int c;
    while((c=getc(ptr))!= EOF)
    {
        putc(c,stdout);
    }
}

void Test_File()
{
    //TODO: Test file operations.
   FILE *first,*second;
   first=fopen("scores.txt","r");
   second=fopen("output.txt","w++");
   Write_To_File(first,second);
   fclose(second);
   fclose(first);
   second=fopen("output.txt","r");
   Print_File(second);
}

int main(void)
{
    //TODO: Do operations.
    Test_File();
    return 0;
}