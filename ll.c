#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int value;
    struct node *next;
}node;
node *createnode(int value)
{
    node *newnode=(node *)malloc(sizeof(node));
    newnode->value=value;
    newnode->next=NULL;
    return newnode;
}
node* insert(node *head,int value)
{
    node *newnode=createnode(value);
    if(head==NULL)
    {
         return newnode;
    }
    node *temp=head;
    while( temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    return head;
}
int linkedlisttonumber(node *head)
{
    int num=0;
    while(head!=NULL)
    {
        num=num*10+head->value;
        head=head->next;
    }
    return num;
}
int multiply(int a,int b)
{
    return a*b;
}
int main()
{
    node *head1=NULL;
    node *head2=NULL;
    int n1,n2;
    printf("enter number of elements in first linked list");
    scanf("%d",&n1);
    int i,data;
    for(i=0;i<n1;i++)
    {
        printf("enter data");
        scanf("%d",&data);
        head1=insert(head1,data);
    }
    printf("enter number of elements in second linked list");
    scanf("%d",&n2);
    for(i=0;i<n2;i++)
    {
        printf("enter data");
        scanf("%d",&data);
        head2=insert(head2,data);
    }
    int num1=linkedlisttonumber(head1);
    int num2=linkedlisttonumber(head2);
    int result = multiply(num1, num2);
    printf("%d",result);
    return 0;
}