#include<stdio.h>
#include<stdlib.h>
#define r 4
#define c 4
int check(int arr[r][c])
{
    int max=0;
    int a;
    for(int i=0;i<r;i++)
    {
        int count=0;
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]==1)
            {
                count++;
            }
        }
        if(count>max)
        {
            max = count;
            a=i;
        }
    }
    return a;
}

int main()
{
    int arr[r][c]={{0, 0, 0, 1}, 
                    {0, 1, 1, 1}, 
                    {1, 1, 1, 1}, 
                    {0, 0, 0, 0}};
    int a = check(arr);
    printf("%d",a);
}
