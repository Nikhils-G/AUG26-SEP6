#include<stdio.h>
int main()
{
    int n=5;
    int leaders[100]={1, 2, 1, 3, 2};
    int v_age[100]={17, 20, 18, 22, 19};
    int count[200]={0};
    for(int i=0;i<200;i++)
    {
        if(v_age[i]>=18)
        {
            count[leaders[i]]++;
        }
    }
    int maxvotes=0;
    int winner;
    int tie=0;
    for(int i=0;i<n;i++)
    {
        if(count[i] > maxvotes)
        {
            maxvotes=count[i];
            winner=i;
            tie=0;
        }
        else if (count[i] == maxvotes && maxvotes != 0) 
        {
            tie = 1;
            
        }
    }
    
   if(tie)
   {
       printf("-1");
   }
   else
   {
       printf("%d",winner);
   }
    
}
