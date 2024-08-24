#include<stdio.h>
#include<stdbool.h>
#include <string.h>
int main()
{
    int n;
    printf(" ");
    char str[10][20];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",str[i]);
    }
    //{"Nikhil","Raju","Kalyan","Prabhas"};
   int pos;
   printf("Position -- ");
   scanf("%d",&pos);
   char str2[10][20],p=0;
   //int k=position / n;
   for(int i=pos;i<n;i++)
   {
       strcpy(str2[p++],str[i]);
   }
   for(int i=0;i<pos;i++ )
   {
       strcpy(str2[p++],str[i]);
   }
   for(int i=0;i<n;i++)
   {
       printf("%s ",str2[i]);
   }
}
