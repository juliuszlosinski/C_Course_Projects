/*
    Reverse string by using my version.
    by JL
    15.02.2021
*/

#include <stdio.h>

#define DEFUALT_SIZE 128

typedef struct
{
    char data[DEFUALT_SIZE];
    int top;
} Stack;

void Push(Stack *ptr, char val)
{
    //TODO: Put value on stack.
    ptr -> data[ ptr -> top] = val;
    ptr -> top++;
}

char Pop(Stack *ptr)
{
    //TODO: Take value from stack.
    ptr -> top--;
    return ptr -> data[(ptr -> top)+1];
}

void Reverse_String()
{
    //TODO: Reverse string.
    Stack stack = {{},0};
    char lab[]={"Hello!"};
    printf("\nBEFORE: %s\n",lab);

    int i;
    for(i=0;i<sizeof(stack)/sizeof(lab[0]);i++)
    {
        Push(&stack, (int)lab[i]);
    }
    for(i=0;i<sizeof(stack)/sizeof(lab[0]);i++)
    {
        lab[i]=Pop(&stack);
        if((i-1)!=-1)
        {
            lab[i-1]=lab[i];
        }
    }

    printf("AFTER: %s\n",lab);
}

int main(void)
{
    //TODO: Do operations.
    Reverse_String();
    return 0;
}