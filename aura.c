#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int max(int a,int b)
{
    return (a>b?a:b);
}
int aura(int a[],int b[],int m,int n)
{
    int dif1=abs(a[0]-b[0]);
    int dif2=abs(a[m-1]-b[n-1]);
    return max(dif1,dif2);
}
int main()
{
    int m,n;
    scanf("%d",&m);
    scanf("%d",&n);
    int a[m],b[n];
    int i,j;
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    int result=aura(a,b,m,n);
    printf("%d",result);
    return 0;
}