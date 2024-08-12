// Online C compiler to run C program online
#include <stdio.h>
int check(int arr[],int n)
{
    int count[10000]={0};
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    int res[n+1];
    int re=0;
    int max=n/3;
    for(int i=0;i<n;i++)
    {
        if(count[arr[i]]>max)
        {
            res[re++]=arr[i];
        }
    }
    int un[100000]={0};
    for(int i=0;i<re;i++)
    {
        if(un[res[i]]==0)
        {
            printf("%d ",res[i]);
        }
        un[res[i]]++;
    }
}
int main() 
{
    int array[] = {11,33,33,11,33,11};
    int n=sizeof(array)/sizeof(array[0]);
    check(array,n);
    return 0;
}
