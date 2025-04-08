#include<stdio.h>
#include<stdlib.h>
void printarray(int arr[],int n)
{
    int temp;
    int i;
    for(i=0;i<n;i++)
    {
       printf("%d",arr[i]);
    }
}
void insertionsort(int arr[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main()
{
    int n;
    printf("enter number of elements");
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("unsorted array");
    printarray(arr,n);
    insertionsort(arr,n);
    printf("sorted array");
    printarray(arr,n);
    return 0;
}