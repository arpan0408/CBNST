// WAP to implement Bisection Methid on the equation f(x) = (2 * pow(x, 4) - 6 * pow(x, 3) + 5 * x - 4) , x = 2.768013

#include <stdio.h>
#include <math.h>

float fx(float x)
{
    return ((2 * pow(x, 4)) - (6 * pow(x, 3)) + (5 * x) - 4);
}

float midpoint(float x1, float x2)
{
    return ((x1 + x2) / 2);
}

void main()
{
    float x1, x2;
    printf("\n\tBisection Method :\n");
    printf("\nEnter the value of x1,x2 = ");
    scanf("%f %f", &x1, &x2);

    float fx1 = fx(x1);
    float fx2 = fx(x2);

    while ((fx1 * fx2) > 0)
    {
        printf("\nf(x1)*f(x2) < 0 not valid enter again = ");
        scanf("%f %f", &x1, &x2);

        fx1 = fx(x1);
        fx2 = fx(x2);
    }
    printf("\nf(x1) = %f\nf(x2) = %f", fx1, fx2);

    float fx3,i=0;

    while (i<20)
    {
        float x3 = midpoint(x1, x2);
        fx1 = fx(x1);
        fx2 = fx(x2);
        fx3 = fx(x3);
        printf("\nf(x1) = %f\nf(x2) = %f\nf(x3) = %f", fx1, fx2, fx3);

        if(fx3 == 0)
            printf("\nx3 = %f is the root.");
        else if ((fx1 * fx3) < 0)
            x2 = x3;
        else if ((fx2 * fx3) < 0)
            x1 = x3;

        printf("\nx1 = %f\nx2 = %f\nx3 = %f", x1, x2, x3);

        i++;
    }
}