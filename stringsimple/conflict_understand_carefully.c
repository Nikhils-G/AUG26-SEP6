#include<stdio.h>
#include<string.h>
void check(char *str)
{
    int n=strlen(str);
    char res[n+1];
    int re=0;
    for(int i=n-1;i>=0;i--)
    {
        if((str[i]-'0') % 2 !=0)
        {
            strncpy(res,str,i+1);
            re=i+1;
            break;
        }
    }
    res[re]='\0';
    printf("%s",res);
}
int main()
{
    char str[]="561";
    check(str);
    
}
