/*
    Lists operations + Sorting.
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

int GetCount(List* ptr)
{
    //TODO: Get length of the list.
    if(ptr==NULL)
    {
        return 0;
    }
    else
    {
        return 1+GetCount(ptr->next);
    }
}

void Connect(List* first, List* second)
{
    //TODO: Connect two lists.
    if(first->next==NULL)
    {
        first->next=second;
    }
    else
    {
        Connect(first->next,second);
    }
}

void Add(List* ptr, int value)
{
    //TODO: Add element to the list.
    if(ptr->next==NULL)
    {
        List* another;
        another=(List*)malloc(sizeof(List));
        another->value=value;
        another->next=NULL;
        ptr->next=another;
    }
    else
    {
        Add(ptr->next,value);
    }
}

void Remove(List* ptr, int value)
{
    //TODO: Remove element from the list.
    if(ptr->next->value==value)
    {
        ptr->next=ptr->next->next;
    }
    else
    {
        Remove(ptr->next,value);
    }
}

int _GetMin(List* ptr,int value)
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
            value=ptr->value;
        }
        _GetMin(ptr->next,value);
    }
}

int GetMin(List* ptr)
{
    //TODO: Get min element from the list.
    return _GetMin(ptr,ptr->value);
}

int _GetMax(List* ptr, int value)
{
    //TODO: Get max element from the list.
    if(ptr==NULL)
    {
        return value;
    }
    else
    {
        if(value<ptr->value)
        {
            value=ptr->value;
        }
        _GetMax(ptr->next,value);
    }
}

int GetMax(List* ptr)
{
    //TODO: Get max element from the list.
    return _GetMax(ptr,ptr->value);
}

void Print_List(List* ptr)
{
    //TODO: Print list.
    if(ptr!=NULL)
    {
        printf("\nVAL: %d\n",ptr->value);
        Print_List(ptr->next);
    }
}

int Get_Remove_Max(List* ptr)
{
    //TODO: Get and remove maximum element from the list.
    int max = GetMax(ptr);
    Remove(ptr,max);
    return max;
}

void Sort(List* ptr)
{
    //TODO: Sort list.
    List* rep = ptr;
    List* start = ptr;
    while(rep->next!=NULL)
    {
        while(ptr->next!=NULL)
        {
            if(ptr->value>ptr->next->value)
            {
                int tmp=ptr->value;
                ptr->value=ptr->next->value;
                ptr->next->value=tmp;
            }
            ptr=ptr->next;
        }
        rep=rep->next;
        ptr=start;
    }
}

void Test_List()
{
    //TODO: Test lists.
    srand(time(0));
    List* head;
    head=(List*)malloc(sizeof(List));
    head->value=1;
    head->next=NULL;
    for(int i=0;i<100;i++)
    {
        Add(head,rand()%100);
    }
    Sort(head);
    Print_List(head);
}

int main(void)
{
    //TODO: Do operations.
    Test_List();
    return 0;
}