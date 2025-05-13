#include<stdio.h>
#include<stdlib.h>
void rotate(int arr[],int n)
{
    int i;
    int temp=arr[0];
    for(i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[i]=temp;
}
int ishairy (int arr[],int n)
{
    int i,j;
     for(i=0;i<n;i++)
     {
        for(j=i+1;j<n;j++)
        {
            if(i+arr[i]==j+arr[j])
            {
                return 0;
            }
        }
     }
     return 1;
}
void makehairy(int arr[],int n)
{
    int count=0;
    while(!ishairy(arr,n) && count<n)
    {
        rotate(arr,n);
        count++;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int i,t,j;
    for(t=0;t<n;t++)
    {
        int num;
        scanf("%d",&num);
        int arr[num];
        for(i=0;i<num;i++)
        {
            scanf("%d",&arr[i]);
        }
        makehairy(arr,num);
        for(j=0;j<num;j++)
        {
            printf("%d",arr[j]);
        }
        printf("\n");
    }
   return 0;
}