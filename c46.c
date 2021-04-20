#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct List
{
    int value;
    struct List *next;
} List;

int GetMax(List *ptr)
{
    //TODO: Get maximum element from the list.
    int max=ptr->value;
    while(ptr!=NULL)
    {
        if(max<ptr->value)
        {
            max=ptr->value;
        }
        ptr=ptr->next;
    }
    return max;
}

int GetMin(List *ptr)
{
    //TODO: Get minum element from the list.
    int min=ptr->value;
    while(ptr!=NULL)
    {
        if(min>ptr->value)
        {
            min=ptr->value;
        }
        ptr=ptr->next;
    }
    return min;
}

void Add(List *ptr, int value)
{
    //TODO: Add element to the list.
    List *another;
    another=(List*)malloc(sizeof(List));
    another->value=value;
    another->next=NULL;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=another;
}

void Remove(List *ptr, int value)
{
    //TODO: Remove element from the list.
    while(ptr->next->value!=value)
    {
        ptr=ptr->next;
    }
    ptr->next=ptr->next->next;
}

void Print_List(List *ptr)
{
    //TODO: Print list.
    while(ptr!=NULL)
    {
        printf("\nValue: %d\n",ptr->value);
        ptr=ptr->next;
    }
}

void Test_List()
{
    //TODO: Test list.
    List *head;
    head=(List*)malloc(sizeof(List));
    head->value=1;
    head->next=NULL;
    Add(head,25);
    Add(head,40);
    Add(head,30);
    Remove(head,40);
    Print_List(head);
}

int main(void)
{
    //TODO: Test operations.
    Test_List();
    return 0;
}