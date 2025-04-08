#include<stdio.h>

#define MAX 100
int heap[MAX];
int size=0;
void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void heapifyup(int index)
{
    int parent=(index-1)/2;
    while(index>0 && heap[index]>heap[parent])
    {
        swap(&heap[parent],&heap[index]);
        index=parent;
        parent=(index-1)/2;
    }
}
void insert(int value)
{
    heap[size]=value;
    heapifyup(size);
    size++;
}
void printheap()
{ 
    int i;
    printf("current heap");
    for(i=0;i<size;i++)
    {
       printf("%d",heap[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    int i,value;
    printf("enter number of elments");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&value);
        insert(value);
        printheap();
    }
    printf("final heap");
    printheap();
    return 0;
}