#include<stdio.h>
#include<limits.h>
void check(int arr[],int n)
{
    int max=INT_MIN;
    int a=0,b=0;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(arr[j] * arr[i] > max && arr[j]+arr[i]==18 && arr[i]>arr[j])
           {
               max= arr[j]*arr[i];
               a=arr[i];
               b=arr[j];
           }
       }
   }
   printf("%d %d",a,b);
}

int main()
{
    int arr[]={11,1,2,8,10,11,15,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    //printf("%d",check(arr,n));
    check(arr,n);
}
