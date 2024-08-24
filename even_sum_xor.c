#include<stdio.h>
int check(int arr[],int n)
{
    int odd=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(i %2==0)
        {
            odd ^=arr[i];
        }
        else
        {
            sum += arr[i];
        }
    }
    return sum-odd;
}
int main()
{
    int arr[]={10,5,6,3,7,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("%d",check(arr,n));
}
