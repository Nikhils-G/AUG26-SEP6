// Online C compiler to run C program online
#include <stdio.h>
void print(int arr1[],int arr2[],int n,int m)
{
    int merged[n+m+1];
    int i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(arr1[i] <=arr2[j])
        {
            merged[k++]=arr1[i++];
        }
        else
        {
            merged[k++]=arr2[j++];
        }
    }
    while(i<n)
    {
        merged[k++]=arr1[i++];
    }
    while(j<m)
    {
        merged[k++]=arr2[j++];
    }
    for(int i=0;i<k;i++)
    {
        printf("%d ",merged[i]);
    }
}



int main()
{
    int arr[]={1,2,5,6};
    int arr2[]={3,4,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
    print(arr,arr2,n,m);
}
