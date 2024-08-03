#include<stdio.h>
int primecheck(int n)
{
    for(int i=2;i<n/2;i++)
    {
        if(n % i == 0)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n=13;
    for(int i=1;i<n/2;i++)
    {
        if((primecheck(i)==0))
        {
            if((primecheck(n-i)==0))
            {
                printf("%d+%d = 13",i,n-i);
                break;
            }
        }
    }
    return 0;
}
