#include<stdio.h>
#include<ctype.h>
#include<string.h>
int check(char str1[],char str2[])
{
        char *pos=strstr(str1,str2);
        if(pos !=NULL)
        {
                return pos-str1;
        }
        return -1;
}
int main()
{
    char str1[]="takeuforward";
    char str2[]="forward";
    int a=check(str1,str2);
    printf("%d",a);
}

p-2
#include <stdio.h>
#include <stdbool.h>
#include <string.h>



bool isRotation(char *s,char *goal) {
    int len_s = strlen(s);
    int len_goal = strlen(goal);
    if (len_s != len_goal) {
        return false;
    }

    // Create a new string that is s concatenated with itself
    char concatenated[2 * len_s + 1];
    strcpy(concatenated, s);
    strcat(concatenated, s);

    // Check if goal is a substring of the concatenated string
    return strstr(concatenated, goal) != NULL;
}

// Driver program
int main() {
    char s[] = "abcde";
    char goal1[] = "cdeab";
    char goal2[] = "abced";
  
    if(isRotation(s,goal1))
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    

    return 0;
}









