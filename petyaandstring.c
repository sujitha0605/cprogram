#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    char string1[101],string2[101];
    scanf("%s",string1);
    scanf("%s",string2);
    int n=strlen(string1);
    int i;
    for ( i = 0; string1[i] != '\0'; i++)
    {
        string1[i] = tolower(string1[i]);
        string2[i]=tolower(string2[i]);
    }
    int result=strcmp(string1,string2);
    if(result>0)
    {
        printf("1");
    }
    else if(result<0)
    {
        printf("-1");
    }
    else
    {
        printf("0");
    }
    return 0;
}