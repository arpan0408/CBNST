//Newton's Forward Interpolation method :

#include <stdio.h>
#include <math.h>

int main()
{
    int a[7][8], i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\nEnter the value = ");
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 2; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            a[j][i] = (a[j + 1][i - 1]) - (a[j][i - 1]);
        }
    }

    printf("\nX\tY\ty2\ty3\ty4\ty5\n");
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8-i; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    int x;
    printf("\nEnter the year = ");
    scanf("%d",&x);
    float h = a[1][0]-a[0][0];
    float u = (x-a[0][0])/h,sum=a[0][1];

    printf("\tU = %.4f",u);

    int f = 1;
    for(i=2;i<=8;i++)
    {
        f *= i;
        sum += (u*a[0][i])/f;
        u *= (u-j);
    }

    printf("\nResult at %d = %f",x,sum);
}