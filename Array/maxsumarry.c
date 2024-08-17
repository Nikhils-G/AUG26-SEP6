#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int check(int arr[],int n)
{
    int max=INT_MIN;
    for(int i=0;i<n-1;i++)
    {
        int mul=1;
        for(int j=i+1;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                mul *= arr[k];
            }
        }
        if(mul >max)
        {
            max=mul;
        }
    }
    return max;
}

int main() 
{
    int arr[]={1,2,-3,0,-4,-5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int a = check(arr,n);
    printf("%d\n", a);

    return 0;
}
