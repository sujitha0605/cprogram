#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int value;
    struct node *left;
    struct node *right;
}node;
node *createnode(int value)
{
    node *newnode=(node *)malloc(sizeof(node));
    newnode->value=value;
    newnode->right=NULL;
    newnode->left=NULL;
    return newnode;
}
node *buildtree()
{
    int data;
    printf("enter data (-1 for NULL)");
    scanf("%d",&data);
    if(data==-1)
    {
        return NULL;
    }
    node *root=createnode(data);
    printf("enter left child of %d",data);
    root->left=buildtree();
    printf("enter right child of data %d",data);
    root->right=buildtree();
    return root;
}
int isidentical(node *roota, node *rootb)
{
    if(roota ==NULL && rootb==NULL)
    {
        return 1;
    }
    if(roota!=NULL && rootb!=NULL && roota->value == rootb->value)
    {
        return (isidentical(roota->left,rootb->left)  && isidentical(roota->right,rootb->right));
    }
    return 0;
}
int main()
{
    node *roota;
    node *rootb;
    printf("enter first binary tree");
    roota=buildtree();
    printf("enter second binary tree");
    rootb=buildtree();
    int result=isidentical(roota,rootb);
    if(result)
    {
        printf("given binary trees are identical");
    }
    else
    {
        printf("the given binary trees are not identical");
    }
    return 0;
}