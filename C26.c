#include <stdio.h>

int main(void)
{
    //Oddball operators:  value = (condition)? (operation for true):(operation for false)
    short a = 15, b = 10, c = (a>b)? (a-b):(++b), d = ((a=15),(b=5)) ;
    printf("C: %d\nD: %d",c,d);
    return 0;
}