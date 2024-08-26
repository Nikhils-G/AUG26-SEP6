v#include<stdio.h>
#include<stdlib.h>
int swap(void const *a,void const *b)
{
    return (*(int*)b-*(int*)a);
}
int fuel(int x,int n,int arr[])
{
    int count=0;
    int rem=0;
    qsort(arr,n,sizeof(int),swap);
    for(int i=0;i<n;i++)
    {
        int elemnt = arr[i];
        if(elemnt + rem >= x)
        {
            rem = elemnt + rem - x;
            if(rem < 0) rem=0;
            return count;
        }
        else
        {
            rem += elemnt;
            count++;
        }
    }
    
    return -1;
    
}

int main()
{
    int d;
    printf("distance=");
    scanf("%d",&d);
    int n;
    scanf("%d",&n);
    int arr[1000];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",fuel(d,n,arr));
    
    
    
}
