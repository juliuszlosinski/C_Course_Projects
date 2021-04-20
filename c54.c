
/*
    Get the values from the file, store it in binary tree, print the tree in order.
    by JL
    18.02.2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Tree
{
    int value;
    struct Tree* left;
    struct Tree* right;
} Tree;

void Add_To_Tree(Tree* node, int value)
{
    //TODO: Adding node to tree.
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
        }
        else
        {
            Add_To_Tree(node->left, value);
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
        }
        else
        {
            Add_To_Tree(node->right, value);
        }
    }
}

void Print_Tree(Tree* node)
{
    //TODO: Printing the tree.
    if(node==NULL)
    {
        return;
    }

    if(node->left!=NULL)
    {
        Print_Tree(node->left);
    }

    printf("\n%d\n",node->value);

    if(node->right!=NULL)
    {
        Print_Tree(node->right);
    }
}

Tree* SetTree(int value)
{
    //TODO: Getting the tree.
    Tree* other;
    other=(Tree*)malloc(sizeof(Tree));
    other->value=value;
    other->left=NULL;
    other->right=NULL;
    return other;
}

void Read_Data_To_Array(FILE* ptr, int array[], int* n)
{
    //TODO: Copying the data from file to an array.
    *n=0;
    while((fscanf(ptr,"%d",&array[*n]))==1)
    {
        (*n)++;
    }
}

void Start(FILE* ptr)
{
    //TODO: Start the algorithm.
    int array[128];
    int n, i=1;
    Read_Data_To_Array(ptr,array,&n);
    Tree* root;
    root=SetTree(array[0]);
    while(i<n)
    {
        Add_To_Tree(root,array[i]);
        i++;
    }
    Print_Tree(root);
}

int main(int argc, char* argv[])
{
    //TODO: Perform operations.
    if(argc==2)
    {
        //TODO: Second argument: name of the file -> c54 "name of file"
        Start(fopen(argv[1],"r"));
    }
    else
    {
        //TODO: Simple/ Default -> c54, open the scores.txt file
        Start(fopen("scores.txt","r"));
    }
    return 0;
}