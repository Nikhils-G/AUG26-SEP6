#include<stdio.h>
#include<string.h>
void strings(char str[],int n)
{
    int length=0;
    int wordends=0;
    int start=0;
    int maxlength =0;
    for(int i=0;i<=n;i++)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            length = i-wordends;
            if(length > maxlength)
            {
                maxlength = length ;
                start = wordends;
            }
            wordends=i+1;
        }
    }
    for(int i=start;i<maxlength-start;i++)
    {
        putchar(str[i]);
    }
}

int main()
{
    char str[]="Google Doc";
    int n=strlen(str);
    strings(str,n);
    return 0;
}
