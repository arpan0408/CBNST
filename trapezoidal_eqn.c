// Trapezoidal equation [creating table from equation]

#include <stdio.h>
#include<math.h>

float method(float h, float y[], int n)
{
    float sum = 0;
    for (int i = 1; i < n; i++)
    {
        sum += y[i];
    }
    sum = (h / 2) * ((y[0] + y[n]) + (2 * sum));

    return sum;
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

    printf("\nTrapezoidal Result: %f",method(h,y,n));

    return 0;
}