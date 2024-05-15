#include <stdio.h>
#include<math.h>

float method(float h, float y[], int n)
{
    float even=0,odd=0;
    for (int i = 1; i < n; i++)
    {
        if(i%2==0)
            even += y[i];
        else
            odd += y[i];
    }
    return ((h / 3) * ((y[0] + y[n]) + (4*odd) + (2*even)));
}

int main()
{
    int n, i;
    float a, b;

    printf("\nEnter the values for a & b: ");
    scanf("%f %f", &a, &b);
    printf("\nEnter the number of intervals: ");
    scanf("%d", &n);

    float h = (b - a) / n;
    printf("\nH = %.2f", h);

    float x[n + 1], y[n + 1];
    x[0] = a;
    for (i = 1; i <= n; i++)
        x[i] = x[i - 1] + h;
    
    for(i=0;i<=n;i++)
        y[i] = 1/(1+pow(x[i],2));

    printf("\nX\tY");
    for(i=0;i<=n;i++)
        printf("\n%.4f\t%.4f",x[i],y[i]);

    printf("\nSimpson 1/3 Result: %.5f",method(h,y,n));

    return 0;
}