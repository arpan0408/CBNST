#include <stdio.h>
#include <math.h>

float root(float x)
{
    return (pow(x, 2) - 2);
}

float fz(float x0, float x1)
{
    return ((x0 + x1) / 2);
}

float bs(float x)
{
    return (pow(x, 2) - 5);
}

void main()
{
    float x1, x2;
    printf("\nEnter the values of x1,x2 = ");
    scanf("%f %f", &x1, &x2);

    float fx1 = root(x1);
    float fx2 = root(x2);

    while ((fx1 > 0 && fx2 > 0) || (fx1 < 0 && fx2 < 0))
    {
        printf("\nThe given initial points are not valid!\n\tTry again = ");
        scanf("%f %f", &x1, &x2);

        fx1 = root(x1);
        fx2 = root(x2);
    }

    printf("f(x1) = %.2f\nf(x2) = %.2f", fx1, fx2);
    printf("\nf(z) = %.2f", fz(x1, x2));

    float f = bs(fz(x1, x2));
    int iteration = 0;

    while (iteration < 3)
    {
        if (f > 0)
        {
            x2 = fz(x1, x2);
            f = bs(fz(x1, x2));
        }
        else if (f < 0)
        {
            x1 = fz(x1, x2);
            f = bs(fz(x1, x2));
        }
        else
            break;
    }

    printf("\nError = %f", f);
}