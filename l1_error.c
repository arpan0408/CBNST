#include <stdio.h>
#include <math.h>

void error(float, float);

void main()
{
    float pi = 22.0 / 7;
    float approx_pi = 3.1415926;

    error(pi, approx_pi);

}

void error(float pi, float a_pi)
{
    float Ea = fabs(pi - a_pi);
    float Er = Ea / pi;
    float Ep = Er * 100;

    printf("Absolute = %f\nRelative = %f\nPercentage = %f", Ea, Er, Ep);

}