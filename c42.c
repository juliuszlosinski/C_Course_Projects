#include <stdio.h>

//TODO: Defining the enumaration types.
typedef enum
{
    january, february, march, april, may, june, july, august, september, october, november, december
} Month;

typedef struct
{
    Month month;
    int day;
} Date;

void Next_Day(Date *ptr)
{
    //TODO: Set the next day.
    int m = (ptr->month)+1;
    int d = (ptr->day)+1;
    if(m!=3) // Not febrauary.
    {
        if((m%2==0) || m==1) // 31 days.
        {
            if(d>31)
            {
                ptr->day=1;
                ptr->month++;
            }
            else
            {
                ptr->day++;
            }
        }
        else // 30 days.
        {
            if(d>30)
            {
                ptr->day=1;
                ptr->month++;
            }
            else
            {
                ptr->day++;
            }
        }
    }
    else
    {
        if(d>28)
        {
            ptr->day=1;
            ptr->month++;
        }
        else
        {
            ptr->day++;
        }
    }
}

void Print_Day(Date date)
{
    //TODO: Print day.
    Month m = date.month;
    switch(m)
    {
        case 0:
        printf("\nJanuary %d\n",date.day);
        break;
        case 1:
        printf("\nFebruary %d\n",date.day);
        break;
        case 2:
        printf("\nMarch %d\n",date.day);
        break;
        case 3:
        printf("\nApril %d\n",date.day);
        break;
        case 4:
        printf("\nMay %d\n",date.day);
        break;
        case 5:
        printf("\nJune %d\n",date.day);
        break;
        case 6:
        printf("\nJuly %d\n",date.day);
        break;
        case 7:
        printf("\nAugust %d\n",date.day);
        break;
        case 8:
        printf("\nSeptember %d\n",date.day);
        break;
        case 9:
        printf("\nOctober %d\n",date.day);
        break;
        case 10:
        printf("\nNovember %d\n",date.day);
        break;
        case 11:
        printf("\nDecember %d\n",date.day);
        break;
    }
}

void Test_Date()
{
    //TODO: Test date system.
    Date dates[]={{february,28},{march,14},{october,31},{december,31}};
    for(int i=0;i<sizeof(dates)/sizeof(dates[0]);i++)
    {
        Print_Day(dates[i]);
        Next_Day(&dates[i]);
        Print_Day(dates[i]);
    }
}

int main(void)
{
    //TODO: Do operations.
    Test_Date();
    return 0;
}