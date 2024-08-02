#include<stdio.h>
void swap(int *xp,int *yp)
{
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}

void sorting(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        swap(&arr[min],&arr[i]);
    }
}
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
int largersum(int arr[],int n)
{
    int even[n],e=0;
    int odd[n],o=0;
    for(int i=0;i<=n;i+=2)
    {
        even[e++]=arr[i];
    }
    for(int i=1;i<=n-1;i+=2)
    {
        odd[o++]=arr[i];
    }
    
    sorting(even,e);
    sorting(odd,o);
   
    printf("\n");
    return even[e-2]+odd[1];
    
}
int main()
{
    int arr[]={1 ,8 ,0 ,2 ,3 ,5 ,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int a=largersum(arr,n);
    printf("%d",a);
    //largersum(arr,n);
}
