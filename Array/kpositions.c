#include<stdio.h>
int check(int arr[],int n,int k)
{
    int temp[n];
    int t=0;
    k = k % n ;
    for(int i=0;i<k;i++)
    {
        temp[t++]=arr[n-k+i];
    }
    for(int i=k;i<n;i++)
    {
        temp[t++]=arr[i-k];
    }
    
    for(int i=0;i<t;i++)
    {
        printf("%d ",temp[i]);
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    check(arr,n,k);
    
}
