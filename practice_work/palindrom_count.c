#include <stdio.h>
#include <string.h>
int palindrome(char str[])
{
    int n=strlen(str);
    for(int i=0;i<n/2;i++)
    {
        if(tolower(str[i]) != tolower(str[n-i-1]))
        {
            return 0;
        }
    }
    return 1;
}

int counting_palindromes(char str[])
{
    int count=0;
    char *token;
    token=strtok(str," ");
    while(token != NULL)
    {
        if(palindrome(token))
        {
            count++;
        }
        token=strtok(NULL," ");
    }
    return count;
}



int main() {
    char str[] = "this is level 71";
    
    int palindromeCount = counting_palindromes(str);
    printf("Number of palindrome words: %d\n", palindromeCount);
    
    return 0;
}
