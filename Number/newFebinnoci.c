// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int n;
    scanf("%d",&n);
    int mod=47;
    int arr[n+1];
    arr[0]=1;
    arr[1]=1;
    for(int i=2;i<=n;i++)
    {
        arr[i]=(((arr[i-1]*arr[i-1]) % mod) + ((arr[i-2] * arr[i-2])% mod))  % mod;
    }
    printf("%d",arr[n] % 47);
    

    return 0;
}
