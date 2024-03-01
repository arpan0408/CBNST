/*The Newton-Raphson method which is also known as Newton’s method, is an iterative numerical method used to find the roots of a real-valued function. This formula is named after Sir Isaac Newton and Joseph Raphson, as they independently contributed to its development. Newton Raphson Method or Newton’s Method is an algorithm to approximate the roots of zeros of the real-valued functions, using guess for the first iteration (x0) and then approximating the next iteration(x1)
which is close to roots, using the following formula.

                         x1 = x0 – f(x0) / f'(x0)

where,
x0 is the initial value of x,
f(x0) is the value of the equation at initial value, and f'(x0) is the value of the first order derivative of the equation or function at the initial value x0. Note : f'(x0) should not be zero else the fraction part of the formula will change to infinity which means f(x) should not be a constant function.

Example : For the initial value x0 = 3,approximate the root of f(x) = x3 + 3x + 1.

Solution :

    Given,
                 x0 = 3 and f(x) = x3 + 3x + 1

                                   f'(x) = 3x2+3

                                   f'(x0) = 3(9) + 3 = 30

                                   f(x0) = f(3) = 27 + 3(3) + 1 = 37

Using Newton Raphson method :

    x1 = x0 – f(x0) / f'(x0) 
        = 3 – 37 / 30 = 1.767
*/


#include <stdio.h>
#include <math.h>
#define f(x) (pow(x,3)+(3*x)+1)
#define fd(x) (3*pow(x,2) + 3)
#define nr(x) (x-(f(x)/fd(x)))


void main()
{
    float x ;

    printf("\nEnter the inital value = ");
    scanf("%f",&x);

    printf("\nResult = %.3f",nr(x));
}