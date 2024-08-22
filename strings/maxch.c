#include<stdio.h>
#include<string.h>

void maxch(char str[], int n)
{
    int freq[26] = {0};  // Array to store frequency of each character
    char ch;
    int max_character = 0;  // Initialize max_character to 0
    for(int i = 0; i < n; i++)
    {
        int index=str[i]-'a';
        freq[index]++;
        if(freq[i] > max_character)
        {
            max_character = freq[i];
            ch = str[i];  // Assign the character corresponding to the max frequency
        }
    }
    
    printf("%c", ch);  // Print the character with the maximum frequency
}

int main()
{
    char str[] = "aabd";
    int n = strlen(str);
    maxch(str, n);
    return 0;
}
