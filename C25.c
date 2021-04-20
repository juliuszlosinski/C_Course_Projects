#include <stdio.h>

int main(void)
{
    int x = 10, y = 20;
    int result = x > y;
    if(result){
        result+=10;
    }
    printf("%d",result);
    return 0;
}