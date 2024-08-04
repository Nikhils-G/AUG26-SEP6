#include <stdio.h>
#include <string.h>

void shiftLetters(char str[]) {
    int n = strlen(str);

    for(int i=0;i<n;i++)
    {
        if(str[i]>='a'&& str[i]<='z')
        {
            if(str[i]=='z')
            {
                str[i]='a';
            }
            else
            {
                str[i]=str[i]+1;
            }
        }
        if(str[i]>='A'&& str[i]<='Z')
        {
            if(str[i]=='Z')
            {
                str[i]='A';
            }
            else
            {
                str[i]=str[i]+1;
            }
        }
    }
}

int main() {
    char str[] = "Nikhil";
    printf("Original string: %s\n", str);
    shiftLetters(str);
    printf("Modified string: %s\n", str);
    return 0;
}
