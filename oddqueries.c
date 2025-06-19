#include<stdio.h>
int main()
{
    int n,q,t,l,r,k;
    scanf("%d",&t);
    printf("\n");
    while(t--)
    {
        scanf("%d",&n);
        scanf("%d",&q);
        printf("\n");
        int arr[n],i,j,z,temp[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            temp[i]=arr[i];
        }
        printf("\n");
     for(j=0;j<q;j++)
     {
             scanf("%d",&l);
             scanf("%d",&r);
             scanf("%d",&k);
             for(z=l-1;z<r;z++)
             {
                arr[z]=k;
             }
        int sum=0;
        for(i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        for(i=0;i<n;i++)
        {
            arr[i]=temp[i];
        }
        if(sum%2==0)
        {
            printf("NO");
        }
        else
        {
            printf("YES");
        }
     }
    }
    return 0;
}