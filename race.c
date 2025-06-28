#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,i,a,x,y;
    scanf("%d",&t);
    while(t--)
    {
        int found=0;
        scanf("%d %d %d",&a,&x,&y);
        int a1=abs(a-x);
        int a2=abs(a-y);
        for(i=1;i<=100;i++)
        {
            int b1=abs(x-i);
            int b2=abs(y-i);
            if(i==a)
            {
                continue;
            }
            if(b1<a1 && b2<a2)
            {
                found=1;
                printf("YES\n");
                break;
            }
        }
        if(!found)
        {
          printf("NO\n");
        }
    }
     return 0;
}