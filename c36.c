#include <stdio.h>
#include <stdlib.h>

enum Day {Monday, Tuesday, Wednesday, Thursday, Friday};
typedef enum Day Day;

void CheckDay(Day Day)
{
    switch(Day)
    {
        case Monday:
        printf("It's monday.\n");
        break;
        case Tuesday:
        printf("It's tuesday.\n");
        break;
        case Wednesday:
        printf("It's wednseday.\n");
        break;
        case Thursday:
        printf("It's thursday.\n");
        break;
        case Friday:
        printf("It's friday.\n");
        break;
    }
}

Day getDay(int d)
{
     Day day = (d<5)? d:-1;
     return day;
}

int main(void)
{
    for(int i=0;i<12;i++)
    {
        int day = (rand()%4)+1;
        CheckDay(getDay(day));
    }
    return 0;
}