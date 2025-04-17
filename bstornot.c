#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int value;
    struct node *right;
    struct node *left;
}node;
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
void inorder(node *root,int arr[],int *index)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left,arr,index);
    arr[(*index)++]=root->value;
    inorder(root->right,arr,index);
}
int checksort(int arr[],int n)
{
    int i;
    for (i = 0; i < n - 1; i++) {
        if (arr[i] >= arr[i + 1]) // strictly increasing for BST
            return 0;
    }
    return 1;
}
int main()
{
     int n;
     printf("enter number of nodes");
     scanf("%d",&n);
     int arr[n];
     node *root=createtree();
     int index=0;
     inorder(root,arr,&index);
     int result=checksort(arr,n);
     if(result)
     {
        printf("given binary tree is binary search tree");
     }
     else{
        printf("give binary tree is not bst tree");
     }
     return 0;
}