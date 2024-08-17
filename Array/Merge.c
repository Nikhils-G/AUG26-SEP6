#include <stdio.h>
#include <stdlib.h>
int swap(void const *a,void const *b)
{
    return (*(int*)a - *(int*)b);
}

void check(int arr1[],int arr2[],int n,int m)
{
    for(int i=0;i<m;i++)
    {
        arr1[n++]=arr2[i];
    }
    qsort(arr1,n,sizeof(int),swap);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);
    }
}

int main() 
{
    int arr1[]={1, 4, 8, 10};
    int arr2[]={2, 3, 9};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
    
    check( arr1, arr2,n, m);
    
    return 0;
}
