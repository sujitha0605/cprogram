#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    while(k--)
    {
        if(n%10==0)
        {
            n=n/10;
        }
        else
        {
            n=n-1;
        }
    }
    printf("%d",n);
    return 0;
}