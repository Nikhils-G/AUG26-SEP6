// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n,m;
    
    printf("n=");
    scanf("%d",&n);
    printf("m=");
    scanf("%d",&m);
    int c= abs(n-m)+1;
    printf("%d",c);
    

    return 0;
}
