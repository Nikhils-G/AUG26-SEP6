#include <stdio.h>
void rotate(int n,int arr[n][n])
{
    int result[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            result[j][n-i-1]=arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}
int main() 
{
    int arr[3][3]={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n=3;
    rotate(n,arr);
    return 0;
}
