#include<stdio.h>


int magical(int n)
{
    int sum =0;
    while(n > 0)
    {
        if(n % 2 ==0)
        {
            sum += 1;
        }
        else
        {
            sum += 2;
        }
        n /=2;
    }
    return (sum % 2 != 0);
}



int magicalcount(int n)
{
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(magical(i))
        {
            count++;
        }
    }
    return count;
}


int main()
{
    int n;
    scanf("%d",&n);
    int result=magicalcount(n);
    printf("%d",result);
    return 0;
}
