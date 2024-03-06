#include<stdio.h>
#include<math.h>
#define f(x) ((2*pow(x,4))-(6*pow(x,3))+(5*x)-4)
#define fd(x) ((8*pow(x,3))-(18*pow(x,2))+5)
#define nr(x) (x-(f(x)/fd(x)))

void main()
{
    float x;
    printf("\nEnter the value = ");
    scanf("%f",&x);
    int i=0;
    while(i<10
    )
    {
        x = nr(x);
        printf("\nResult = %f",x);
        i++;
    }
}