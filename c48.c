#include <stdlib.h>
#include <stdio.h>
#include <time.h>

typedef struct Tree
{
    int value;
    struct Tree* left;
    struct Tree* right;
} Tree;

int Compare(Tree* first, Tree* second)
{
    //TODO: Compare two nodes.
    if(first->value == second->value)
    {
        return 0;
    }
    else
    {
        return (first->value > second->value)? 1:-1;
    }
}

void Print(Tree* node)
{
    //TODO: Print tree.
    if(node==NULL)
    {
        return;
    }
    if(node->left!=NULL)
    {
        Print(node->left);
    }
    printf("\nVAL: %d\n",node->value);
    if(node->right!=NULL)
    {
        Print(node->right);
    }
}

void Add(Tree* node, int value)
{
    //TODO: Add element to tree.
    if(node->value>value)
    {
        if(node->left==NULL)
        {
            Tree* other;
            other=(Tree*)malloc(sizeof(Tree));
            other->value=value;
            other->left=NULL;
            other->right=NULL;
            node->left=other;
            return;
        }
        else
        {
            Add(node->left,value);
        }
    }
    else if(node->value<value)
    {
        if(node->right==NULL)
        {
            Tree* other;
            other=(Tree*)malloc(sizeof(Tree));
            other->value=value;
            other->left=NULL;
            other->right=NULL;
            node->right=other;
            return;
        }
        else
        {
            Add(node->right,value);
        }
    }
}

void Test_Tree()
{
    //TODO: Test tree.
    srand(time(0));
    Tree* first;
    first=(Tree*)malloc(sizeof(Tree));
    first->value=10;
    first->left=NULL;
    first->right=NULL;

    for(int i=0;i<10;i++)
    {
        Add(first,rand()%100);
    }

    Print(first);
}

int main(void)
{
    //TODO: Perform operations.
    Test_Tree();
    return 0;
}