#include<stdio.h>
int pairwithdifferencen(int arr[],int n,int num)
{
     int i,j;
     for(i=0;i<n;i++)
     {
        for(j=i+1;j<n;j++)
        {
            if( arr[i]-arr[j]==num|| arr[j]-arr[i]==num)
            {
                printf("differnec of %d and %d is %d",arr[i],arr[j],num);
                return 1;
            }
        }
    }
   return 0;
}
int main()
{
    int n;
    printf("enter number of elements of array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n", n);\
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int num;
    printf("enter the pair with difference");
    scanf("%d",&num);
    int value=pairwithdifferencen(arr,n,num);
    if(!value)
    {
        printf("such a pair doesnot exist");
    }
    return 0;
}