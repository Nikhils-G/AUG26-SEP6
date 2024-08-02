#include<stdio.h>
#include<string.h>

int unique(char str[],int n)
{
    int unique[10]={0};
    int count=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum += str[i]-'0';
        unique[str[i]-'0']=1;
    }
    if(sum != n)
    {
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        if(unique[i]==1)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char str[]="1210";
    int n=strlen(str);
    int a=unique(str,n);
    printf("%d",a);
}


