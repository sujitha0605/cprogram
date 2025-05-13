#include<stdio.h>
#include<stdlib.h>
int shigma(int n,int k)
{
    int size=(1<<(n-1))-1;
    if(k==size+1)
    {
        printf("%d",n);
        break;
    }
    if(k<=(size))
    {
       n=n--;
    }
    else
    {
        n=n--;
        k=k-size-1;
    }
}
int main()
{
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int result=shigma(n,k);
    printf("%d",result);
    return 0;
}