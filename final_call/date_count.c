#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_DATES 10
#define DATE_LENGTH 11 // Length of "dd-mm-yyyy" is 10, plus one for '\0'

// Function to check if the date is already in the list of unique dates
int isUnique(char dates[MAX_DATES][DATE_LENGTH], int count, char* date) {
    for (int i = 0; i < count; i++) {
        if (strcmp(dates[i], date) == 0) {
            return 0; // Not unique
        }
    }
    return 1; // Unique
}

int main() {
    char str[] = "nitin is born in 12-12-2012 and his celebrate 2-1-2010 because 12-12-2012 is not his birthday";
    char dates[MAX_DATES][DATE_LENGTH];
    int dateCount = 0;

    char* token = strtok(str, " ");
    while (token != NULL) {
        if (strchr(token, '-') != NULL) { // Check if the token contains a '-'
            if (strlen(token) == 10 || strlen(token) == 8) { // Check if the length matches "dd-mm-yyyy" or "d-m-yyyy"
                // Check and store unique dates
                if (isUnique(dates, dateCount, token)) {
                    strcpy(dates[dateCount], token);
                    dateCount++;
                }
            }
        }
        token = strtok(NULL, " ");
    }

    // Print unique dates
    printf("Unique dates found:\n");
    for (int i = 0; i < dateCount; i++) {
        printf("%s\n", dates[i]);
    }

    return 0;
}
