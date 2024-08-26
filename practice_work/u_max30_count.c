#include<stdio.h>
int unqui(int arr[],int n,int x,int y)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((arr[i]==x && arr[j]==y ) || (arr[i]==y && arr[j]==x))
            {
                return 0;
            }
        }
    }
    return 1;
}
int u_check(int arr[],int n)
{
    int count =0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((arr[i]*arr[j]) % 3 == 0)
            {
                if(unqui(arr,i,arr[i],arr[j]))
                {
                    count++;
                }
            }
        }
    }
    return count;
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[1000];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",u_check(arr,n));
}
