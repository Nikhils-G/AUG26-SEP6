#include<stdio.h>
#include<string.h>
#include<ctype.h>
void check(char str[],int n)
{
    int maxfreq=0;
    char *token;
    char result[100];
    token=strtok(str," ");
    while(token != NULL)
    {
        int max=0;
        int freq[26]={0};
        int n=strlen(token);
        for(int i=0;i<n;i++)
        {
            freq[token[i]]++;
            if(freq[token[i]]>max)
            {
                max=freq[token[i]];
            }
        }
        if(max>maxfreq)
        {
            maxfreq=max;
            strcpy(result,token);
        }
        token=strtok(NULL," ");
    }
    printf("%s\n",result);
    printf("%d    ",maxfreq);
}
int main()
{
    char str[]="Nikhil HHHuuuuHHH Inter";
    int n=strlen(str);
    check(str,n);
 
}
