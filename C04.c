/*
    Calculate of fibonacci number
    by JŁ
    6.12.2020
*/

#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    int i=1,sum=0;
    while(n!=0)
    {
        sum+=i;
        i++;
        n--;
    }

    printf("Fibonnaci number: %d",sum);
    return 0;
}