#include<stdio.h>
#include <string.h>
int main()
{
    char str[]="Nikhilioo";
    int n=strlen(str);
    int rem=0;
    for(int i=0;i<n;i++)
    {
        rem = rem * 10 + str[i]-'0';
        rem = rem % 11;
    }
    printf("%d",rem);
}
