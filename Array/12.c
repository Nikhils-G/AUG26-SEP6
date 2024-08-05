#include <stdio.h>

int maxConsecutiveOnes(int arr[], int n,int k)
{
    int maxlength=0;
    for(int i=0;i<n;i++)
    {
        int sum =0;
        
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            if(sum==k)
            {
                int length = j-i+1;
                if(length > maxlength)
                {
                    maxlength = length;
                }
                
            }
        }
    }
    return maxlength;
}
int main() {
    int arr[] = {1,3,4,7,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = maxConsecutiveOnes(arr, n,8);
    printf("Maximum consecutive count: %d\n", result);

    return 0;
}
