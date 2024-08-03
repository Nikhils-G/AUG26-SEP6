#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,c,x,y;
    printf("numerator1=");
    scanf("%d",&x1);
    printf("denominator1=");
    scanf("%d",&y1);
    printf("numerator2=");
    scanf("%d",&x2);
    printf("denominator2=");
    scanf("%d",&y2);
    int a= (x1*y2)+(x2*y1);
    int b=y1*y2;
    int gcd=1;
    for(int i=1;i<=a || i <=b ; i++)
    {
        if(a % i==0 && b % i == 0 )
        {
            gcd=i;
        }
    }
    printf("%d/%d",a/gcd,b/gcd);
    
}
