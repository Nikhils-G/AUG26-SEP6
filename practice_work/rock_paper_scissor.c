#include<stdio.h>
#include <string.h>

void chocal(char arr[])
{
    if(strcmp(arr,"rock")==0)
    {
        printf("paper");
    }
    else if(strcmp(arr,"scissor")==0)
    {
        printf("rock");
    }
    else if(strcmp(arr,"paper")==0)
    {
        printf("rock");
    }
    else
    {
        printf("-1");
    }
}
int main()
{
    char str[]="paper";
    chocal(str);
    
}
