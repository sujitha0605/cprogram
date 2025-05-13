#include<stdio.h>
#include<stdlib.h>
void generatefairy(int n)
{
    int i;
    int sum=0;
    int res=(n/2)*(n/2+1);
    for(i=1;i<n;i++)
    if(i%2==0)
    {
        printf("%d ",i);
        sum+=i-1;
    }
    printf("%d ",n);
    for(i=1;i<n;i++)
    if(i%2==0)
    {
        printf("%d ",i-1);
    }
    int fin=res-sum;
    printf("%d ",fin);
}
void isfairy(int n)
{
    if(n%4==0)
    {
        printf("yes\n");
        generatefairy(n);
    }
    else
    {
         printf("no\n");
    }
}
int main()
{
    int nu;
    scanf("%d",&nu);
    int t;
    for(t=0;t<nu;t++)
    {
        int n;
        scanf("%d",&n);
        isfairy(n);
    }
    return 0;
}