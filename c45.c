#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct List
{
    int value;
    struct List * next;
} List;

void Print_List(List *ptr)
{
    //TODO: Print the list.
    while(ptr!=NULL)
    {
        printf("\nVAL: %d\n",ptr->value);
        ptr=ptr->next;
    }
}

void Add(List *ptr, int value)
{
    //TODO: Add element to the list.
    List *other = (List*)malloc(sizeof(List));
    other->value=value;
    other->next=NULL;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=other;
}

void Remove(List *ptr, int value)
{
    //TODO: Remove element from the list.
    while(ptr->next!=NULL)
    {
        if(ptr->next->value==value)
        {
            ptr->next=ptr->next->next;
            break;
        }
        ptr=ptr->next;
    }
}

int GetMax(List *ptr)
{
    //TODO: Get max value from the list.
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
    //TODO: Get min value from the list.
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

void Test_List()
{
    //TODO: Test list.
    List *head = (List*)malloc(sizeof(List));
    head->value=5;
    head->next=NULL;

    srand(time(0));
    for(int i=0;i<20;i++)
    {
        Add(head,rand()%100);
    }

    Print_List(head);
    printf("\nMAX: %d\nMIN: %d\n",GetMax(head),GetMin(head));
}

int main(void)
{
    Test_List();
    return 0;
}