#include<stdio.h>
#define r 3
#define c 3
void search(int arr[r][c],int element)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]==element)
            {
                printf("%d %d ",i,j);
            }
        }
    }
    
}
int main()
{
    int arr[r][c]={{1,22,300},{3,11,4},{9,8,7}};
    int element=300;
    search(arr,element);
}
