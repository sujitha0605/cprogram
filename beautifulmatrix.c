#include <stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,l,k,arr[5][5];
    for(i=0;i<5;i++)
    {
       for(j=0;j<5;j++)
       {
        scanf("%d",&arr[i][j]);
       }
    }
    for(k=0;k<5;k++)
    {
       for(l=0;l<5;l++)
       {
          if(arr[k][l]==1)
          { 
            int result=abs(l-2)+abs(k-2);
            printf("%d",result);
            break;
          }
       }
    }
return 0;
}