// Newton's backward difference method :

#include <stdio.h>

int main()
{
    int r;
    printf("\nEnter the rows of the data : ");
    scanf("%d", &r);

    int a[r][r + 1], i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("\nEnter the value = ");
            scanf("%d",&a[j][i]);
        }
        printf("\nNext column : ");
    }
    for(i=2;i<r+1;i++)
    {
        for(j=0;j<r-i+1;j++)
        {
            a[j][i] = a[j+1][i-1] - a[j][i-1];
        }
    }
    printf("\nX\tY\tY1\tY2\tY3\tY4\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < r+1-i; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    int x,f=1;
    printf("\nEnter the year = ");
    scanf("%d",&x);
    float h = a[1][0]-a[0][0];
    float u = (x-a[r-1][0])/h,sum = a[r-1][1];

    printf("\n\tU = %.4f",u);
    for(i=2;i<=r+1;i++)
    {
        f *= i;
        sum += (u*a[r-i][i])/f;
        u *= (u+j);
    }

    printf("\nResult at %d is %f",x,sum);
}