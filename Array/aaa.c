#include<stdio.h>
#include <math.h>
int count(int n)
{
    int c=0;
    while(n !=0 && n %2 ==0)
    {
        c++;
        n=n/2;
    }
    return c;
}
int expooo(int a,int b)
{
    int max=1;
    int num;
   for(int i=a;i<=b;i++)
   {
       
       if(count(i)>max)
       {
           return i;
       }
   }
}

int main()
{
    int a=7;
    int b=12;
    int z=expooo(a,b);
    printf("%d",z);
}
