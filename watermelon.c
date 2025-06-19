#include<stdio.h>
int watermelon(int t)
{
    int i;
    for(i=1;i<=t/2;i++)
    {
        if(i%2==0)
        {
            int j=t-i;
            if(j%2==0)
            {
                return 1;
                break;
            }
        }
    }
    return 0;
}
int main()
{
    int t;
    scanf("%d",&t);
    int result=watermelon(t);
    if(result)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
return 0;
}