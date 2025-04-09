#include<stdio.h>
#define MAX 100
int heap[MAX];
int size=0;
int arr[MAX];
int del=0;
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void heapifyup(int index)
{
    int parent=(index-1)/2;
    while(index>0 && heap[parent]<heap[index])
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

void heapifydown(int index)
{
    int largest=index;
    int left=2*index+1;
    int right=2*index+2;
    if(left<size && heap[left]>heap[largest])
    {
        largest=left;
    }
    if(right<size && heap[right]>heap[largest])
    {
        largest=right;
    }
    if(index != largest)
    {
        swap(&heap[largest],&heap[index]);
        heapifydown(largest);
    }
}

void deleteroot()
{
    if(size==0)
    {
        printf("Heap is empty\n");
        return;
    }
    printf("Deleted root: %d\n", heap[0]);
    arr[del]=heap[0];
    del++;
    heap[0]=heap[size-1];
    size--;
    heapifydown(0);
}

void printheap()
{
   int i;
   for(i=0;i<size;i++)
   {
       printf("%d ",heap[i]);
   }
   printf("\n");
}

int main()
{   
    int i, value, n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &value);
        insert(value);
        printf("Current Heap: ");
        printheap();
    }

    printf("Final heap: ");
    printheap();
    while(size>0)
    {
    deleteroot();
    printf("Heap after deleting root: ");
    printheap();
    }
    printf("sorted elements");
   for(i=0;i<del;i++)
   {
    printf("%d",arr[i]);
   }

    return 0;
}