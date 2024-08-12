// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main() {
    int temp[]={3,2,98,12,67,0,1};
    int n=sizeof(temp)/sizeof(temp[0]);
    qsort(temp, n, sizeof(int), compare);
    display(temp,n);

    return 0;
}
