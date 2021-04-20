/*
    Get the info about data: sum, AVERAGE, max, min, cout.
    by JL
    14.02.2021
*/

#include <stdio.h>

void GetInfo()
{
    //TODO: Get data from file.
    FILE *ptr = fopen("elephant_seal_data.txt", "r");  // Getting and opennig the file.
    int data[1024]; // Setting default size of an array with data.
    int n = 0;  // Final size of an array with data.
    int sum = 0; // Sum of elements from data.
    int max; // Maximum element from data.
    int min; // Minimum element from data.

    for (int i = 0; i < sizeof(data); i++)
    {
        int number; // Temp variable to store number from file.
        if (fscanf(ptr, "%d", &number) == 1) // Getting the number;
        {
            if(i==0)
            {
                max=number; // Setting the first value of max element.
                min=number; // Setting the first value of min element.
            }
            else
            {
                if(max<number)
                {
                    max=number; // Setting the new max value.
                }
                else if(min>number)
                {
                    min=number; // Setting the new min value.
                }
            }
            data[i] = number; // Adding to array.
            n++;  // Increment the final size;
            sum+=number; // Adding to sum.
        }
        else 
        {
            fclose(ptr); // Closing the file.
            break; 
        }
    }

    printf("\nINFO: \nSum: %d\nAverage: %0.3f\nMax: %d\nMin: %d\nCount: %d\n",sum,(float)sum/n,max,min,n); // Printing the result.
}

int main(void)
{
    //TODO: Perforom operations.
    GetInfo();
    return 0;
}