#include<stdio.h>
#include<stdlib.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionsort(int arr[],int n)
{
    int i,j,min;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                 min=j;
            }
        }
        swap(&arr[i],&arr[min]);
    }
}
void printarray(int arr[],int n)
{
    int temp;
    int i;
    for(i=0;i<n;i++)
    {
       printf("%d",arr[i]);
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
    selectionsort(arr,n);
    printf("sorted array");
    printarray(arr,n);
    return 0;
}