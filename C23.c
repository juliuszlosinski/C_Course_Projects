#include <stdio.h>

typedef struct
{
    char name[50];
    char lastName[50];
    double age;
}Person;

int ComparePerson(Person first, Person second)
{
    if(first.age>second.age)
    {
        return 1;
    }
    else if(first.age<second.age)
    {
        return -1;
    }
    return 0;
}

int Factorial(int n)
{
    if(n==1)
    {
        return n;
    }
    else
    {
        return n*Factorial(--n);
    }
}

void Start()
{
    Person first,second;
    first.age=20.5f;
    second.age=19.5f;
    int comp=ComparePerson(first,second);
    switch(comp)
    {
        case 1:
        printf("First person is older!");
        break;
        case -1:
        printf("Second person is older!");
        break;
        case 0:
        printf("They are the same age!");
    }
}

int main(void)
{
    Start();
    return 0;
}