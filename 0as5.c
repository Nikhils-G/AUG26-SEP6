#include<stdio.h>
int main()
{
    int n=100067;
    int arr[100],v=0;
    while(n != 0)
    {
        int d=n %10;
        arr[v++]=d;
        n /=10;
    }
    for(int i=v-1;i>=0;i--)
    {
        if(arr[i]==0)
        {
            arr[i]=5;
        }
        printf("%d",arr[i]);
    }
}
