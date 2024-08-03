#include<stdio.h>

int colliner(int x1,int y1,int x2,int y2,int x3,int y3)
{
    int area=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
    return (area==0);
}
void equation(int x1,int y1,int x2,int y2,int x3,int y3)
{
    if(colliner(x1,y1,x2,y2,y3,x3))
    {
        int a=y2-y1;
        int b=x1-x2;
        int c=a * x1 + b * y1;
        if(b<0)
        {
            printf("%dx-%dy=%d",a,-b,c);
        }
        else 
        {
            printf("%dx + %dy = %d ",a,b,c);
        }
    }
    else
    {
        printf("\0");
    }
}
int main()
{
    int x1=2,y1=1, x2=1 ,y2=1,x3=2, y3=1;
    equation(x1,y1,x2,y2,x3,y3);
    return 0;
    
}
