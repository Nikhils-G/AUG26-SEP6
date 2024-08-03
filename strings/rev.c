#include<stdio.h>
#include<string.h>
void rev(char *str,int n)
{
    char result[n+1];
    int re=0;
    int wordend=n;
    for(int i=n-1;i>=0;i--)
    {
        int start;
        if(str[i]==' ')
        {
            start=i+1;
        }
        else if(i==0)
        {
            start = i;
        }
        else
        {
            continue;
        }
        int end = wordend;
        for(int j = start; j<end; j++)
        {
            result[re++]=str[j];
            
        }
        if(i != 0)
        {
            result[re++]=' ';
        }
        wordend=i;
    }
    result[re]='\0';
    
    //for(int i=0;i<re;i++)
    //{
     printf("%s",result);
    //}
}
int main()
{
    char str[]="Nikhil Is Very Good Boy !!";
    int n=strlen(str);
    rev(str,n);
    return 0;
}
