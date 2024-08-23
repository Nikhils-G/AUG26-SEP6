#include<stdio.h>
#include<string.h>
int check(char str[],int n)
{
    int result=str[0]-'0';
    for(int i=1;i<n;i+=2)
    {
        int b=str[i+1]-'0';
        if(str[i] == 'A')
        {
            result &= b; 
        }
        else if(str[i]== 'B')
        {
            result |= b;
        }
        else if(str[i]=='C')
        {
            result ^=b;
        }
    }
    return result;
    
}
int main()
{
    char str[]="1C0C1C1A0B1";
    int n=strlen(str);
    int s=check(str,n);
    printf("%d",s);
}
