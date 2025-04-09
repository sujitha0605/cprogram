#include<stdio.h>
#include<math.h>
int jumpsearch(int arr[],int n,int key)
{
    int m=sqrt(n);
    int start=0;
    int end=m;
    while(end<n && arr[end-1]<key)
    {
        start=end;
        end+=m;
    }
    int i;
    for(i=start;i<end;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
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
    int key;
    printf("enter element to find");
    scanf("%d",&key);
    int value=jumpsearch(arr,n,key);
    printf("%d found at %d",key,value+1);
    return 0;
}