#include <stdio.h>

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void sorting(int arr[], int n) {
    int min;
    for(int i = 0; i < n - 1; i++) {
        min = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(&arr[min], &arr[i]);
    }
}

void rank(int arr[], int n)
{
    int arr1[n];
    for(int i=0;i<n;i++)
    {
        arr1[i]=arr[i];
    }
    sorting(arr1,n);
    int rank[n];
    for(int i=0;i<n;i++)
    {
        rank[i]=1;
        for(int j=0;j<n;j++)
        {
            if(arr[j]>arr1[i])
            {
                rank[i]++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=rank[i];
    }
}

void display(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {8, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    rank(arr, n);
    display(arr, n);
    return 0;
}
