#include <stdio.h>

typedef struct
{
    int data[128];
    int top;
} Stack;

void Push(Stack *ptr, int value)
{
    //TODO: Put a value on the stack.
    ptr -> top = ptr -> top + 1;
    ptr -> data[ptr->top]=value;
}

int Pop(Stack *ptr)
{
    //TODO: Take a value from the stack.
    ptr -> top--;
    return ptr -> data[ptr->top+1];
}

void Test_Stack()
{
    //TODO: Test stack.
    Stack stack = {{},0};
    int i;
    for(i=0;i<20;i++)
    {
        Push(&stack,i);
    }
    for(i=0;i<20;i++)
    {
        printf("%d\n",Pop(&stack));
    }
}

void Reverse_String()
{
    char lab[7]="Hello!";
    Stack stack = {{},0};
    int i;
    printf("\nBEF: %s\n",lab);
    for(i=0;i<sizeof(lab);i++)
    {
        Push(&stack,lab[i]);
    }
    for(i=0;i<sizeof(lab);i++)
    {
        char res = (char)Pop(&stack);
        lab[i]=res;
    }
    printf("\nAFT: %s\n",lab);
}

int main(void)
{
    //TODO: Do operations.
    Reverse_String();
    return 0;
}