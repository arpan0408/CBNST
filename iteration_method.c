#include <stdio.h>
#include <math.h>
#define f(x) (cos(x) - (3 * x) + 1)
#define eq(x) (cos(x)+1)/3

int main()
{
    float a, b;
    do
    {
        printf("\nEnter the initial poins(a&b): ");
        scanf("%f %f", &a, &b);
    } while (f(a) * f(b) > 0);

    int n,i;
    printf("\nEnter the number of iterations: ");
    scanf("%d",&n);

    float x = f(x);
    printf("\nX = %f",x);
    for(i=1;i<=n;i++)
    {
        x = eq(x);
        printf("\n%d. iteration: %.4f",i,x);
    }

    return 0;
}