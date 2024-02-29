#include <stdio.h>
#include <math.h>

float f(float x)
{
    return ((2 * pow(x, 4)) - (6 * pow(x, 3)) + (5 * x) - 4);
}

float mid(float x0, float x1)
{
    return ((x1*f(x0)-x0*f(x1))/(f(x0)-f(x1)));
}

void main()
{
    printf("\n\t Regula Falsi method");

    float x0, x1;

    do
    {
        printf("\nEnter the x0,x1 = ");
        scanf("%f %f", &x0, &x1);

    } while (f(x0) * f(x1) > 0);

    printf("\nf(x0) = %f\nf(x1) = %f", f(x0), f(x1));

    float fx0 = f(x0),
          fx1 = f(x1);
\
    int i = 0;
    while (i < 10)
    {
        float x2 = mid(x0, x1), fx2;

        fx0 = f(x0);
        fx1 = f(x1);
        fx2 = f(x2);

        if (fx2 == 0)
            printf("\nf(x) = %f is the root.", x2);
        else if ((fx0 * fx2) < 0)
        {
            x1 = x2;
        }
        else if ((fx1 * fx2) < 0)
            x0 = x2;

        printf("\nx0 = %f \nx1 = %f \nx2 = %f", x0, x1, x2);
        i++;
    }
}