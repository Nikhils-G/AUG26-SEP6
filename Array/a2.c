#include<stdio.h>
int NumberOfCarries(int num1 , int num2)
{
    int count=0;
    int carry=0;
    while(num1 >0 || num2 >0)
    {
        int r1=num1%10;
        int r2=num2%10;
        int p = carry + r1+ r2 ;
        if(p>9)
        {
            count++;
            carry=1;
        }
        else
        {
            carry=0;
        }
        num1 /=10;
        num2 /=10;
    }
    return count;
}
int main()
{
    int num1=23;
    int num2=563;
    int a=NumberOfCarries(num1,num2);
    printf("%d",a);
}
