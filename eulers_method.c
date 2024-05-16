#include <stdio.h>
#define eqn(x, y) (y - (2 * x))

float ef(float h, float x, float y,float sr,float er)
{
    float sum = y;
    while(x<=er)
    {
        sum += (h * eqn(x, sum));
        x += h;
    }

    return sum;
}

int main()
{
    float x, y,h,sr,er;
    printf("\nEnter the values of (x,y) & h: ");
    scanf("%f %f %f", &x, &y, &h);
    printf("\nEnter the starting range: ");
    scanf("%f", &sr);
    printf("\nEnter the ending range: ");
    scanf("%f", &er);

    printf("\nResult = %.4f",ef(h,x,y,sr,er));

    return 0;
}