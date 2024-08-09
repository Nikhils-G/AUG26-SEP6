#include<stdio.h>
#include<string.h>
int check(char str[],int n)
{
    int wordend=n;
    int start=0;
    int maxlength=0;
    int left,right;
    for(int i=0;i<=n;i++)
    {
        left =i;
        right=i;
        while(left<n&&str[left]==str[right] && right<n)
        {
            int length=right-left+1;
            if(length > maxlength)
            {
                maxlength = length;
                start = left;
            }
            left--;
            right++;
        }
        left =i;
        right=i+1;
        while(left<n&&str[left]==str[right] && right<n)
        {
            int length=right-left+1;
            if(length > maxlength)
            {
                maxlength = length;
                start = left;
            }
            left--;
            right++;
        }
    }
    for(int j=start ; j<maxlength;j++)
    {
        putchar(str[j]);
    }
}
int main()
{
    char str[]="aaaLLLLLLLLLLLLLLLLss";
    int n=strlen(str);
    check(str,n);
}
