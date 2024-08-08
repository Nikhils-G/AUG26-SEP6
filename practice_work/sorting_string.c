#include<stdio.h>
#include<string.h>
void swap(char *xp,char *yp)
{
    char temp=*xp;
    *xp=*yp;
    *yp=temp;
}
void selection(char str[],int n)
{
    int min;
    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(str[j]<str[min])
            {
                min=j;
            }
        }
        swap(&str[min],&str[i]);
    }
}

int main()
{
    char str1[]="ccbbaa";
    int n=strlen(str1);
    //selection(str1,n);
    printf("%s",str1);
    return 0;
}
