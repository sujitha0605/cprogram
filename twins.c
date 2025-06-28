#include<stdio.h>
void sort(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int i,n;
    scanf("%d",&n);
    int total=0,arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        total+=arr[i];
    }
    sort(arr,n);
    int count=0,sum=0;
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
        count++;
        if(sum>total-sum)
        {
            break;
        }
    }
    printf("%d",count);
    return 0;
}