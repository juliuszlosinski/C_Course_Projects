#include <stdio.h>
#include <stdlib.h>

typedef enum Name{Mark, Jack, Back, Shock, Rack} Name; //enum type Name

void CheckName(Name name)
{
    //TODO: Check what name is this.
    switch(name)
    {
        case Mark:
        printf("\tHello Mark!\n");
        break;
        case Jack:
        printf("\tHello Jack!\n");
        break;
        case Back:
        printf("\tHello Back!\n");
        break;
        case Shock:
        printf("\tHello Shock!\n");
        break;
        case Rack:
        printf("\tHello Rack!\n");
        break;
        default:
        printf("\tWrong name!\n");
        break;
    }
}

Name getName(int n)
{
    //TODO: Get name.
    return (n<5)? n:-1;
}

int main(void)
{
    //TODO: Perform operations.
    short i=0, max= 15;
    while(i<max)
    {
        CheckName(getName((rand()%4)+1));
        i++;
    }
    return 0;
}

