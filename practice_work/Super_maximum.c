#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("");
    scanf("%d",&n1);
    printf("");
    scanf("%d",&n2);
    printf("");
    scanf("%d",&n3);
    int temp,result;
    temp = n1>n2 ? n1:n2;
    result = temp > n3?temp : n3;
    printf("%d",result);
    
}
