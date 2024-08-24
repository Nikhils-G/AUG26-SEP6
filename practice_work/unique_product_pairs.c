#include<stdio.h>
int main()
{
    int arr[]={1, 2, 3, 4, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((arr[i]*arr[j]) % 3 == 0)
            {
                count++;
            }
        }
    }

    printf("%d",count);
}
