#include<stdio.h>
void reflect(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            printf("even ");
        }
        
        else
        {
            printf("odd ");
        }
    }
}
int main()
{
    int arr[]={0,1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    reflect(arr,n);
}
