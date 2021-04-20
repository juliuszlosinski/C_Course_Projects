#include <stdio.h>

typedef struct {
    char name[20];
    char lastName[20];
    double age;
}Student;

void Test()
{
    char c;
    printf("Enter character: ");
    scanf("%c",&c);
    printf("ASCI: %d next %d is %c",c,c+1,c+1);
    int x=c+1;
    printf("X equals: %c \a",x);
}

int main(void)
{
    Test();
    return 0;
}