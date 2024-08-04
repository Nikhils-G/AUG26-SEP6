#include<stdio.h>
#include<string.h>
int check(char str1[],char str2[])
{
    int n=strlen(str1);
    int m=strlen(str2);
    for(int i=0;i<=n-m;i++)
    {
        int j;
        for(j=0;j<m;j++)
        {
            if(str1[i+j] != str2[j])
            {
                break;
            }
        }
        if(j==m)
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    char str1[] = "takeuforward";
    char str2[] = "forward";
    
    int position = check(str1, str2);
    printf("Position: %d\n", position);
}
