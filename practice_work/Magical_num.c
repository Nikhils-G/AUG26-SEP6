#include<stdio.h>
#include<stdbool.h>
int iseven(int n)
{
    int arr[100];
    int v=0;
    while(n != 0)
    {
        int d = n % 2;
        arr[v++]=d;
        n /= 2;
    }
    int sum =0;
    for(int i=0;i<v;i++)
    {
        if(arr[i]==1)
        {
            arr[i]=2;
            sum +=arr[i];
        }
        else if(arr[i]==0)
        {
            arr[i]=1;
            sum += arr[i];
        }
    }
    if(sum % 2 !=0)
    {
        return true;
    }
    return false;
}
int main()
{
    int n;
    printf("");
    scanf("%d",&n);
    int count=0;
    for(int i=1;i<n;i++)
    {
        if(iseven(i))
        {
            count++;
        }
    }
    printf("%d",count);
    
}
