#include <stdio.h>
#include <string.h>

// Function to swap two characters
void swap(char *xp, char *yp) {
    char temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// Partition function for quicksort
int partition(char str[], int low, int high) {
    char pivot = str[high]; // Pivot element
    int i = low - 1; // Index of the smaller element

    for (int j = low; j < high; j++) {
        if (str[j] < pivot) {
            i++;
            swap(&str[i], &str[j]);
        }
    }
    swap(&str[i + 1], &str[high]);
    return i + 1;
}

// Quicksort function
void quickSort(char str[], int low, int high) {
    if (low < high) {
        int pi = partition(str, low, high); // Partition index

        // Recursively sort elements before
        // partition and after partition
        quickSort(str, low, pi - 1);
        quickSort(str, pi + 1, high);
    }
}

int main() {
    char str1[] = "ccbbaa";
    int n = strlen(str1);
    
    quickSort(str1, 0, n - 1);
    
    printf("%s\n", str1);
    return 0;
}
