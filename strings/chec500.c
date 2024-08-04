#include<stdio.h>
#include<ctype.h>
#include<string.h>
int check(char str1[],char str2[])
{
        char *pos=strstr(str1,str2);
        if(pos !=NULL)
        {
                return pos-str1;
        }
        return -1;
}
int main()
{
    char str1[]="takeuforward";
    char str2[]="forward";
    int a=check(str1,str2);
    printf("%d",a);
}
