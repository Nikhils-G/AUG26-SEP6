// Online C compiler to run C program online
#include <stdio.h>
int traingle(int n,int r)
{
    int res=1;
    for(int i=0;i<r;i++)
    {
        res = res * (n-i);
        res = res / (i+1);
    }
    return res;
}
int main() 
{
    int r=3;
    int c=1;
    printf("%d",traingle(r-1,c-1));
    return 0;
}
