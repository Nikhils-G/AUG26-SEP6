#include<stdio.h>
#include<stdbool.h>

bool primesum(int n)
{
    if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return true;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n % i==0)
        {
            return false;
        }
    }
    return true;
}


int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    int count=0;
    for(int i=2;count<n;i++)
    {
        if(primesum(i))
        {
            sum += i;
            count++;
        }
    }
    printf("%d",sum);
}
