#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int max(int arr[],int n)
{
    int i;
    int max=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int rizz(int maximum,int arr[],int n)
{
    int i;
    int count=0;
    for(i=0;i<n;i++)
    {
      count=count+abs(maximum-arr[i]);
    }
    return count;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int maximum=max(arr,n);
    int result=rizz(maximum,arr,n);
    printf("%d",result);
    return 0;
}