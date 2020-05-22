/****************************************************************
 *  Aim   : Use Trapezoidal method to calcilate the integrals   *
 *          this function is in the problem 2.c.                *
 *  Author: CHEN Shu                                            *
 *  Date  : 2020/05/21                                          *
*****************************************************************/
#include <stdio.h>
#include <math.h>

#define PI 3.1415926

double functionValue(double x);

int main()
{
    int n, i;                         //Separate the domain into n parts
    double iniPoint_a, finPoint_b, h; //h = (b - a)/n
    double midValue, result;

    printf("Please enter the begin point: ");
    scanf("%lf", &iniPoint_a);
    printf("Please enter the end point: ");
    scanf("%lf", &finPoint_b);
    printf("\n");

    for (n = 1; n <= 8; n++) {
        h = (finPoint_b - iniPoint_a) / n;
        midValue = 0;
        for (i = 1; i <= n - 1; i++) {
            midValue += functionValue(iniPoint_a + i * h);
        }
        result = functionValue(iniPoint_a) + functionValue(finPoint_b);
        result *= 0.5;
        result += midValue;
        result *= h;
        printf("When n = %d, the integral is: %.6f\n", n, result);
    }

    return 0;
}

double functionValue(double x)
{
    double result;
    result = pow(sin(x*PI/180), 2.0) - 2 * x * sin(x*PI/180) + 1;

    return result;
}