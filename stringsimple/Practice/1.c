#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int check(char str[],int n)
{
    char result[n+1],j=0;
    for(int i=n-1;i>=0;i--)
    {
        if((str[i]-'0') % 2 != 0)
        {
           strncpy(result,str,i+1);
           j=i+1;
           break;
        }
    }
    result[j]='\0';
    printf("%s",result);
    
}
int main()
{
    char str[]="561";
    int n=strlen(str);
    check(str,n);
}
