#include<stdio.h>
#include<string.h>
int check_unique_substring(char str[],int n)
{
    int co=0;
    for(int i=0;i<=n-4;i++)
    {
        int count[26]={0};
        int unique=1;
        for(int j=i;j<i+4;j++)
        {
            count[str[j]-'a']++;
            if(count[str[j]-'a']>1)
            {
                unique=0;
                break;
            }
        }
        if(unique)
        {
            co++;
        }
    }
    return co;
}
int main()
{
    char str[]="abcdefabcd";
    int n=strlen(str);
    int a=check_unique_substring(str,n);
    printf("%d",a);
}
