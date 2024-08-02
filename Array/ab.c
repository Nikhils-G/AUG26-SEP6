#include<stdio.h>
#include <math.h>
int main()
{
    float x1,y1,x2,y2,x3,y3;
    printf("Enter x1,y1 : ");
    scanf("%f %f",&x1,&y1);
    printf("Enter x2,y2 : ");
    scanf("%f %f",&x2,&y2);
    printf("Enter x3,y3 : ");
    scanf("%f %f",&x3,&y3);
    
    float first=sqrt(pow(x2-x1,2))+sqrt(pow(y2-y1,2));
    float second=sqrt(pow(x3-x2,2))+sqrt(pow(y3-y2,2));
    float third=sqrt(pow(x3-x1,2))+sqrt(pow(y3-y1,2));
    
    
    float result=first+second+third;
    printf("%f",result);
    
}a
