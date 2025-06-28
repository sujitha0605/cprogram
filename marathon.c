#include<stdio.h>
int main()
{
    int t,i,j,arr[4];
    scanf("%d",&t);
    while(t--)
    {
        int count=0;
        for(i=0;i<4;i++)
        {
           scanf("%d",&arr[i]);
        }
        for(j=1;j<4;j++)
        {
          if(arr[0]<arr[j])
          {
            count++;
          }
        }
        printf("%d\n",count);
    }
    return 0;
}