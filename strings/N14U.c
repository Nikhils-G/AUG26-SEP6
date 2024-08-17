// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int check(char str[],int n)
{
    if(n>10)
    {
        printf("%c%d%c",str[0],n,str[n-1]);
    }
    else
    {
        printf("%s",str);
    }
}
int main()
{
    char str[]="NikhilLovesYou";
    int n=strlen(str);
    check(str,n);

    return 0;
}
