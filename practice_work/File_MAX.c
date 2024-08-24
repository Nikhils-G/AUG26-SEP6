#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("");
    scanf("%d",&n);
    char s[10][20];
    for(int i=0;i<n;i++)
    {
        scanf("%s",s[i]);
    }
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(strncmp(s[i],"File_",5)==0)
        {
            int version = atoi(s[i]+5);
            {
                if(version> max)
                {
                    max= version;
                }
            }
        }
    }
    printf("%d",max);
}
