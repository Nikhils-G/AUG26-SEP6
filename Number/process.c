#include<stdio.h>
int main()
{
    int n=7;
    int x=2;
    int co=0;
    for(int i=1;i<=n;i++)
    {
        int count=0;
        for(int j=1;j<=i;j++)
        {
            if(i % j==0)
            {
                count++;
            }
        }
        if(count==x)
        {
            co++;
        }
    }
    printf("%d",co);
}
