#include<stdio.h>
#include<string.h>
#include <ctype.h>
int peak(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i] > arr[i-1] && arr[i]>arr[i+1])
        {
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    int arr[]={1,2,3,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("%d",peak(arr,n));
    return 0;
}
