#include <stdio.h>

int isDiv(int number)
{
    if(number % 2 == 0)
    {
        return 1;
    }
    return -1;
}

int main(void){
    switch(isDiv(4)){
        case 1:
        printf("Is even.");
        break;
        case -1:
        printf("Is not even.");
        break;
    }
    return 0;
}