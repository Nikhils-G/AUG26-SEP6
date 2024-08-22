#include <stdio.h>
#include <string.h>

void print_common_substrings(char* str1, char* str2)
{
    int n=strlen(str1);
    int m=strlen(str2);
    int dp[n+1][m+1];
    int l=0;
    memset(dp,0,sizeof(dp));
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(str1[i-1]==str2[j-1])
            {
                dp[i][j]=dp[i-1][j-1]+1;
                l=dp[i][j];
                if(dp[i][j]>0)
                {
                    for(int k=i-l;k<i;k++)
                    {
                        putchar(str1[k]);
                    }
                    putchar('\n');
                }
                else
                {
                    dp[i][j]=0;
                }
            }
        }
    }
    
}

int main() {
    char K1[] = "abcdxyz";
    char K2[] = "xyzabcd";
    print_common_substrings(K1,K2);

    return 0;
}
