#include<stdio.h>
void sorting_new(int arr[],int n)
{
    int low=0;
    int high=n-1;
    int mid=0;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            int temp=arr[low];
            arr[low]=arr[mid];
            arr[mid]=temp;
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            int temp=arr[high];
            arr[high]=arr[mid];
            arr[mid]=temp;
            high--;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int arr[]={1,2,0,2,1,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    sorting_new(arr,n);
    return 0;
}
