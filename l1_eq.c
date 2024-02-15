#include<stdio.h>
#include<math.h>

void error(float);

void main()
{
    float n;
    printf("Enter the value x = ");
    scnaf("%f",&n);

    error(n);
}

void error(float x)
{
    float v = 3*pow(x,3)+7*pow(x,2)-8*x-11;

    printf("Answer = %f",v);
}