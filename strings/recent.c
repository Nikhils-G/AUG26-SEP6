// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
void lengthprint(char str[],int n,int k)
{
    int count=0;
    int wordend=0;
    for(int i=0;i<n;i++)
    {
        if(str[i] == ' ')
        {
            count++;
        }
        else if(count==k)
        {
            wordend =i;
        }
    }
    for(int i=0;i<=wordend;i++)
    {
        printf("%c",str[i]);
    }
}
int main() 
{
   char str[]="Please Check The Tv Is More ";
   int n=strlen(str);
   int k=3;
   lengthprint(str,n,k);
    return 0;
}
