/*
    Generate double linked list with 200 elements, remove duplicates.
    by JL
    17.02.2021
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

typedef struct List
{
    int value;
    struct List* previous;
    struct List* next;
} List;

void Add(List* ptr, int value)
{
    //TODO: Adding an element to the list.
    if(ptr->next==NULL)
    {
        List* another;
        another=(List*)malloc(sizeof(List));
        another->value=value;
        another->previous=ptr;
        another->next=NULL;
        ptr->next= another;
    }
    else
    {
        Add(ptr->next, value);
    }
}

void Remove(List* ptr, int value)
{
    //TODO: Remove element from the list.
    if(ptr->next->value==value)
    {
        ptr->next=ptr->next->next;
        ptr->next->previous=ptr;
    }
    else
    {
        Remove(ptr->next, value);
    }
}

void Print_List(List* ptr)
{
    //TODO: Print the list.
    if(ptr!=NULL)
    {
        printf("\nVAL: %d\n",ptr->value);
        Print_List(ptr->next);
    }
}

void Sort(List* ptr)
{
    //TODO: Sort list.
    List* first=ptr;
    List* second=ptr;
    while(first->next!=NULL)
    {
        while(second->next!=NULL)
        {
            if(second->value>second->next->value)
            {
                int tmp=second->value;
                second->value=second->next->value;
                second->next->value=tmp;
            }
            second=second->next;
        }
        first=first->next;
        second=ptr;
    }
}

int Contains(List* ptr, int value)
{
    //TODO: Contains list the value.
    if(ptr==NULL)
    {
        return -1;
    }
    else if(ptr->value==value)
    {
        return 1;
    }
    else
    {
        Contains(ptr->next, value);
    }
}

List* Unduplicate(List* ptr)
{
    //TODO: Eliminate duplicates from the list.
    List*other;
    other=(List*)malloc(sizeof(List));
    other->value=ptr->value;
    other->next=NULL;
    other->previous=NULL;

    while(ptr!=NULL)
    {
        if((Contains(other,ptr->value))<0)
        {
            Add(other,ptr->value);
        }
        ptr=ptr->next;
    }

    return other;
}

void Test_List()
{
    //TODO: Test list.
    srand(time(0));
    List* head;
    head=(List*)malloc(sizeof(List));
    head->value=1;
    head->next=NULL;
    head->previous=NULL;
    
    for(int i=0;i<200;i++)
    {
        Add(head,rand()%49);
    }

    Sort(head);
    Print_List(Unduplicate(head));
}

int main(void)
{
    //TODO: Do operations.
    Test_List();
    return 0;
}