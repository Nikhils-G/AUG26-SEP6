#include<stdio.h>
#include<stdlib.h>
#define r 3
#define c 3
int swap(void const* a,void const* b)
{
    return (*(int*)a - *(int*)b);
}
int median(int mat[r][c])
{
    int arr[r*c];
    int x=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            arr[x++]=mat[i][j];
        }
    }
    qsort(arr,x,sizeof(int),swap);
    if(x % 2==0)
    {
        return ((arr[x/2-1] + arr[x/2])/2);
    }
    else
    {
        return arr[x/2];
    }
    
}
int main()
{
    int arr[r][c]={{1,3,3},{2,5,6},{6,9,9}};
    int a =median(arr);
    printf("%d",a);
}
