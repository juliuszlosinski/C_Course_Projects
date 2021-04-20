#include <stdio.h>

int Factorial(int n)
{
    static int count = 0;
    count++;
    return (n==0)? 1:(n*Factorial(n-1));
}

int main(void)
{
    int n;
    printf("Number: ");
    scanf("%d",&n);
    printf("Result: %d",Factorial(n));
    return 0;
}