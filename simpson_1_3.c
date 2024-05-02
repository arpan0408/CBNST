//Simpson 1/3

#include <stdio.h>

int fun(int y[], int r)
{
    int sum = 0;
    for (int i = 1; i < r - 1; i++)
    {
        if(i%2==0)
        sum += (2 * y[i]);
        else
        sum += (4*y[i]);
    }

    return sum;
}

int main()
{
    int r;
    printf("\nEnter the no. of rows = ");
    scanf("%d", &r);
    int x[r], y[r], i;

    printf("\nEnter the elements of x: ");
    for (i = 0; i < 2; i++)
    {
        printf("\nEnter the value = ");
        scanf("%d", &x[i]);
    }

    printf("\nEnter the elements of y: ");
    for (i = 0; i < r; i++)
    {
        printf("\nEnter the value = ");
        scanf("%d", &y[i]);
    }


    int dx = x[1] - x[0], a = y[0], b = y[r - 1], fr = fun(y, r);
    int result = (dx / 3.0) * (y[0] + y[r - 1] + fr);

    printf("\nResult = %d", result);
}