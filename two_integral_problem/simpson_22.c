/****************************************************************
 *  Aim   : Use Simpson's method to calcilate the integrals     *
 *          this function is in problem 22(page211)             *
 *  Author: CHEN Shu                                            *
 *  Date  : 2020/05/21                                          *
*****************************************************************/
#include <stdio.h>

int main()
{
    int i, n = 7; //Because the given data, we got n = 14
    double h = 84.0 / n;
    double time[15] = {0}, sum1 = 0, sum2 = 0, result = 0;
    double speed[15] = {124, 134, 148, 156, 147, 133, 121, 
    109, 99, 85, 78, 89, 104, 116, 123};
    for (i = 0; i < 15; i++) time[i] = 6 * i;

    for (i = 0; i < n; i++) sum1 += 4 * speed[i * 2 + 1];
    for (i = 0; i < n - 1; i++) sum2 += 2 * speed[(i + 1) * 2];

    result = sum1 + sum2 + speed[0] + speed[14];
    result *= (h / 6);
    printf("\nThe track is %.0f feets.\n", result);

    return 0;
}