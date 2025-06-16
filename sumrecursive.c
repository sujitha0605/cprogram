#include<stdio.h>
int add(int n,int sum)
{
    if(n==0)
    {
        return sum;
    }
    sum+=n%10;
    return add(n/10,sum);
}
int main()
{
    int n;
    printf("sumof digits of the number ");
    scanf("%d",&n);
    int result=add(n,0);
    printf("%d",result);
    return 0;
}