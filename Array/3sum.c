// Online C compiler to run C program online
#include <stdio.h>
#include<stdbool.h>
bool check(int arr[],int n,int sum)
{
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
           {
               if(arr[i]+arr[j]+arr[k]==sum)
               {
                   printf("[%d %d %d ]",arr[i],arr[j],arr[k]);
                   return true;
               }
           }
        }
    }
    return false;
}
int main() 
{
    int array[] = {-1,0,1,2,-1,-4};
    int n=sizeof(array)/sizeof(array[0]);
    int sum=0;
    check(array,n,sum);
    return 0;
}
