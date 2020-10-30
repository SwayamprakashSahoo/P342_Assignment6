//Program to numerically integrate a function using Midpoint, trapezoidal and Simpson techniques
//and compare the result in tabular format with actual analytical result

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "mylib.h"

int main()
{
	double ll, ul;
	printf("Given function is:\n\tx/(x+1)\n");
	printf("Please enter the limits of integration.\n");
	printf("Lower limit:\t");
	scanf("%lf", &ll);
	printf("Upper limit:\t");
	scanf("%lf", &ul);
	double mid[3], trap[3], simp[3];
	double val = 2 - log(2);
	printf("Analytical value of integration:\t%lf\n", val);

	//using midpoint rule
	mid[0] = midpoint(ll, ul, 5, 1);
	mid[1] = midpoint(ll, ul, 10, 1);
	mid[2] = midpoint(ll, ul, 25, 1);

	//using trapezoidal rule
	trap[0] = trapezoidal(ll, ul, 5, 1);
	trap[1] = trapezoidal(ll, ul, 10, 1);
	trap[2] = trapezoidal(ll, ul, 25, 1);

	//using Simpson's rule
	simp[0] = simpsons(ll, ul, 6, 1);
	simp[1] = simpsons(ll, ul, 10, 1);
	simp[2] = simpsons(ll, ul, 24, 1);

	printf("\nUsing midpoint rule:-\n");
	printf("\tCount\tIntegral Value\tError\n");
	printf("\t5\t%lf\t%lf\n", mid[0], fabs(val - mid[0]));
	printf("\t10\t%lf\t%lf\n", mid[1], fabs(val - mid[1]));
	printf("\t25\t%lf\t%lf\n", mid[2], fabs(val - mid[2]));

	printf("\nUsing trapezoidal rule:-\n");
	printf("\tCount\tIntegral Value\tError\n");
	printf("\t5\t%lf\t%lf\n", trap[0], fabs(val - trap[0]));
	printf("\t10\t%lf\t%lf\n", trap[1], fabs(val - trap[1]));
	printf("\t25\t%lf\t%lf\n", trap[2], fabs(val - trap[2]));

	printf("\nUsing Simpson's rule:-\n");
	printf("\tCount\tIntegral Value\tError\n");
	printf("\t6\t%lf\t%lf\n", simp[0], fabs(val - simp[0]));
	printf("\t10\t%lf\t%lf\n", simp[1], fabs(val - simp[1]));
	printf("\t24\t%lf\t%lf\n", simp[2], fabs(val - simp[2]));

}









/**********************************OUTPUT********************************************
-------------------------------------------------------------------------------------
Given function is:
        x/(x+1)
Please enter the limits of integration.
Lower limit:    1
Upper limit:    3
Analytical value of integration:        1.306853

Using midpoint rule:-
        Count   Integral Value  Error
        5       1.308092        0.001239
        10      1.307165        0.000312
        25      1.306903        0.000050

Using trapezoidal rule:-
        Count   Integral Value  Error
        5       1.304365        0.002488
        10      1.306229        0.000624
        25      1.306753        0.000100

Using Simpson's rule:-
        Count   Integral Value  Error
        6       1.306830        0.000023
        10      1.306850        0.000003
        24      1.306853        0.000000
*************************************************************************************/
