#include<stdio.h>
#include <ctype.h>
#include <string.h>
void check(char str[],int n)
{
    int count1=0,count2=0;
    for(int i=0;i<n;i++)
    {
        if(islower(str[i]))
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(count1 > count2)
        {
            str[i] = tolower(str[i]);
        }
        else
        {
            str[i] = toupper(str[i]);
        }
    }
    printf("%s",str);
}
int main()
{
    char str[]="NIKHluf";
    int n=strlen(str);
    check(str,n);
}
