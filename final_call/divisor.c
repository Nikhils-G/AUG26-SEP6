// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int arr[]={12,1,35,24};
    int n=sizeof(arr)/sizeof(arr[0]);
    int divisor  = 8;
    int quotient = 3;
    int remainder1= 0;
    int flag =1;
    int divident = divisor * quotient + remainder1 ;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==divident)
        {
            printf("%d",i);
            flag=1;
            break;
        }
        else
        {
            flag=0;
        }
    }
    if(flag != 1)
    {
        printf("-1");
    }

    return 0;
}
