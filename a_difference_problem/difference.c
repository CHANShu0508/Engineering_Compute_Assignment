/****************************************************************
 *  Aim   : Use back/forward difference method to               *
 *          calcilate the integrals                             *
 *  Author: CHEN Shu                                            *
 *  Date  : 2020/05/21                                          *
*****************************************************************/
#include <stdio.h>

int main()
{
    int i;
    double xArray[3] = {0}, yArray[3] = {0}, difference[3] = {0};
    printf("Please enter values of x: ");
    for (i = 0; i < 3; i++) scanf("%lf", &xArray[i]);
    for (i = 0; i < 3; i++) {
        printf("Please enter f(%.1f) = ", xArray[i]);
        scanf("%lf", &yArray[i]);
    } //Initialize the array
    double h = xArray[1] - xArray[0];

    for (i = 0; i < 2; i++) {
        difference[i] = (yArray[i + 1] - yArray[i]) / h;
    }
    difference[2] = (yArray[2] - yArray[1]) / h;

    printf("  x  |  f(x)  |  f'(x)  \n");
    printf("—————+————————+—————————\n");
    for (i = 0; i < 3; i++) {
        printf(" %.1f | %.4f | %.4f\n", xArray[i], yArray[i],difference[i]);
    }

    return 0;
}