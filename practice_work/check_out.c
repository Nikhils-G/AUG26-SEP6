// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
char* dect(int n,int num)
{
    char rem[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char* result=(char*)malloc(sizeof(char));
    int in=0;
    while(num != 0)
    {
        int digit= num % n;
        result[in++]=rem[digit];
        num /=n;
    }
    result[in] = '\0';
    for(int i=0;i<in/2;i++)
    {
        int temp=result[i];
        result[i]=result[in-i-1];
        result[in-i-1]=temp;
    }
    return result;
}
int main() 
{
    int n=12;
    int num=718;
    char* result = dect(n, num);
    printf("%s",result);
    free(result);

    return 0;
}
