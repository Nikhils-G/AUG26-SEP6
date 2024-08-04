#include<stdio.h>
#include<string.h>
void strings(char str1[],int n,char str2[],int m)
{
    int count1[26]={0};
    int count2[26]={0};
    for(int i=0;i<n;i++)
    {
        count1[str1[i]-'a']++;
    }
    for(int i=0;i<m;i++)
    {
        count2[str2[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(count1[i] > 0 && count2[i]==0)
        {
            printf("%c",i+'a');
        }
    }
    for(int i=0;i<26;i++)
    {
        if(count2[i] > 0 && count1[i]==0)
        {
            printf("%c",i+'a');
        }
    }
}

int main()
{
    char str[]="abcdef";
    char str2[]="cdefgh";
    int n=strlen(str);
    int m=strlen(str);
    strings(str,n,str2,m);
    return 0;
}
