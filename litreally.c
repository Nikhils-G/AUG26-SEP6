#include <stdio.h>

void printLeaders(int arr[], int n) {
    if (n == 0) return;

    // Start from the last element
   int max=arr[n-1];
   printf(" %d ",max);
   for(int i= n-2;i >= 0;i --)
   {
       if(arr[i] > max)
       {
           printf(" %d ",arr[i]);
           max=arr[i];
       }
      
   }
    printf("\n");
}

int main() {
    int arr1[] = {4, 7, 1, 0};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printLeaders(arr1, n1);

    int arr2[] = {10, 22, 12, 3, 0, 6};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printLeaders(arr2, n2);

    return 0;
}
