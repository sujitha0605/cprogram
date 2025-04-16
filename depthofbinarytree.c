#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int value;
    struct node *right;
    struct node *left;
}node;
int max(int a, int b)
{
    if(a>=b)
    {
        return a;
    }
        return b;
}
node *createnode(int value)
{
    node *newnode=(node *)malloc(sizeof(node));
    newnode->value=value;
    newnode->right=NULL;
    newnode->left=NULL;
    return newnode;
}
node *createtree()
{
    int data;
    printf("enter the data (-1 for NULL)");
    scanf("%d",&data);
    if(data==-1)
    {
        return NULL;
    }
    node *current=createnode(data);
    printf("enter the left child of %d",data);
    current->left=createtree();
    printf("enter right child of %d",data);
    current->right=createtree();
    return current;
}
int maxdepth(node *root)
{
    if (root==NULL)
    {
        return -1;
    }
    int leftdepth=maxdepth(root->left);
    int rightdepth=maxdepth(root->right);
    return 1+max(leftdepth,rightdepth);
}
int main()
{
    printf("create binary tree");
    node *root=createtree();
    int depth=maxdepth(root);
    printf("%d",depth);
    return 0;
}
