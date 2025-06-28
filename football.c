#include<stdio.h>
int main()
{
    char arr[101];
    scanf("%s",arr);
    int i,count=1;
    for(i=1;arr[i]!='\0';i++)
    {
        if(arr[i]==arr[i-1])
        {
            count++;
            if(count>=7)
        {
            printf("YES");
            return 0;
        }
        }
        else
        {
            count=1;
        }
    }
    printf("NO");
    return 0;
}