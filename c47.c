/*
    Operations on the lists.
    by JL
    17.02.2021
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct List
{
    int value;
    struct List* next;
} List;

int GetCount(List* first)
{
    //TODO: Count the lenght of the list.
    if(first==NULL)
    {
        return 0;
    }
    else
    {
        return 1+GetCount(first->next);
    }
}

int Get_Remove_Max(List* first)
{
    //TODO: Get and remove max.
    int max=GetMax(first);
    Remove(max);
    return max;
}

void Sort(List* ptr,List* start)
{
    
}

void Connect(List *first, List*second)
{
    //TODO: Concat two lists.
    if(first->next==NULL)
    {
        first->next=second;
    }
    else
    {
        Connect(first->next,second);
    }
}

void Insert(List *first, List*second, int value)
{
    //TODO: Insert value between two values.
    if(first->next==second)
    {
        List* other;
        other=(List*)malloc(sizeof(List));
        other->value=value;
        other->next=first->next;
        first->next= other;
    }
    else
    {
        Insert(first->next,second,value);
    }
}

void Add(List* ptr, int value)
{
    //TODO: Add element to the list.
    if(ptr->next==NULL)
    {
        List* other;
        other=(List*)malloc(sizeof(List));
        other->value=value;
        other->next=NULL;
        ptr->next=other;
    }
    else
    {
        Add(ptr->next,value);
    }
}

void Remove(List* ptr,int value)
{
    //TODO: Remove element from the list.
    if(ptr->next->value=value)
    {
        ptr->next=ptr->next->next;
    }
    else
    {
        Remove(ptr,value);
    }
}

void Print_List(List* ptr)
{
    //TODO: Print list.
    if(ptr!=NULL)
    {
        printf("\nValue: %d\n",ptr->value);
        Print_List(ptr->next);
    }
}

int _GetMax(List* ptr,int value)
{
    //TODO: Get max element from the list.
    if(ptr==NULL)
    {
        return value;
    }
    else
    {
        if(ptr->value>value)
        {
            return _GetMax(ptr->next,ptr->value);
        }
        else
        {
            return _GetMax(ptr->next,value);
        }
    }
}

int GetMax(List* ptr)
{
    //TODO: Get max element from the list.
    return _GetMax(ptr,ptr->value);
}

int _GetMin(List* ptr, int value)
{
    //TODO: Get min element from the list.
    if(ptr==NULL)
    {
        return value;
    }
    else
    {
        if(ptr->value<value)
        {
            return _GetMin(ptr->next,ptr->value);
        }
        else
        {
            return _GetMin(ptr->next,value);
        }
    }
}

int GetMin(List* ptr)
{
    //TODO: Get minimum element from the list.
    return _GetMin(ptr, ptr->value);
}

void Test_List()
{
    //TODO: Test list.
    srand(time(0));
    List* head;
    head=(List*)malloc(sizeof(List));
    head->value=1;
    head->next=NULL;
    for(int i=0;i<10;i++)
    {
        Add(head,rand()%100);
    }
    Add(head,10);
    Add(head,15);
    Sort(head,head);
    Print_List(head);
    printf("\nMAX: %d\nMIN: %d\nLNG: %d\n",GetMax(head),GetMin(head),GetCount(head));
}

int main(void)
{
    //TODO: Perform operations.
    Test_List();
    return 0;
}