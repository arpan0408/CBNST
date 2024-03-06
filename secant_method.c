#include <stdio.h>
#include <math.h>
#define f(x) ((2 * pow(x, 4)) - (6 * pow(x, 3)) + (5 * x) - 4)
#define sec(x0, x1) ((x0 * f(x1) - x1 * f(x0)) / (f(x1) - f(x0)))

void main()
{
    float x0, x1;

    do
    {
    printf("\nEnter the x0,x1 = ");
    scanf("%f %f", &x0, &x1);
    } while ((f(x0) * f(x1)) > 0);

    int i=0;
    while(i<20)
    {
        float x2 = sec(x0,x1);
        
        if((f(x0)*f(x2))>0)
        x1 = x2;
        else
        x0 = x2;
        i++;
        printf("\nx0 = %f\nx1 = %f\nx2 = %f",x0,x1,x2);
    }
}