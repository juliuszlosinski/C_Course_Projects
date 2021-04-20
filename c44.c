#include <stdio.h>
#include <stdlib.h>

struct List
{
    int value;
    struct List *next;
};

typedef struct List List;

void Print_List(List* ptr)
{
    //TODO: Print list.
    while(ptr!=NULL)
    {
        printf("\nVAL: %d\n",ptr->value);
        ptr=ptr->next;
    }
}

void Add(List *ptr,int value)
{
    //TODO: Add element to the list.
    List* second=(List*)malloc(sizeof(List));
    second->value=value;
    second->next=NULL;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=second;
}

void Test_List()
{
    //TODO: Test lists.
    List* first;
    first=(List*)malloc(sizeof(List));
    first->value=15;
    first->next=NULL;

    for(int i=0;i<10;i++)
    {
        Add(first,i*2);
    }

    Print_List(first);
}


int main(void)
{
    //TODO: Do operations.
    Test_List();
    return 0;
}