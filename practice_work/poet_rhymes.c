#include<stdio.h>
#include <string.h>
int checking(char str[],char s[])
{
    int  n=strlen(str);
    int m=strlen(s);
    while(n>0 && m >0)
    {
        if(str[n-1] != s[m-1])
        {
            return 0;
        }
        n--;
        m--;
    }
    if(strcmp(str,s)==0)
    {
        return 0;
    }
    return 1;
}
int main()
{
    char str[100];
    printf("word=");
    scanf("%s",str);
    int n;
    printf("enter number of words=");
    scanf("%d",&n);
    char s[10][100];
    printf("enter words=");
    for(int i=0;i<n;i++)
    {
        scanf("%s",s[i]);
    }
    char result[100];
    for(int i=0;i<n;i++)
    {
        if(checking(str,s[i]))
        {
            strcpy(result,s[i]);
            break;
        }
    }
    printf("%s",result);
    
}
