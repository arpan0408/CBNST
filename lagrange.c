#include <stdio.h>

int main()
{
    int r;
    printf("\nEnter the rows = ");
    scanf("%d", &r);
    int x[r], y[r], i, j, xp;
    for (j = 0; j < r; j++)
    {
        printf("\nEnter the value(x) = ");
        scanf("%d", &x[j]);
    }
    for (j = 0; j < r; j++)
    {
        printf("\nEnter the value(y) = ");
        scanf("%d", &y[j]);
    }

    printf("\nEnter the y(x) = ");
    scanf("%d", &xp);

    float result=0;
    for (i = 1; i < r; i++)
    {
        float term = 1;
        for (j = 1; j < r; j++)
        {
            if (j != i)
                term = term * (xp - x[j]) / (x[i] - x[j]);
        }
        result += term * y[i];
    }

    printf("Result at %d = %.2f", xp, result);
}