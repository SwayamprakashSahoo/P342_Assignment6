//Program to numerically integrate a function using Midpoint, trapezoidal and Simpson techniques
//till a maximum error value of 0.001

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "mylib.h"

int main()
{
	double ll, ul;
	printf("Given function is:\n\te^(-(x^2))\n");
	printf("Please enter the limits of integration.\n");
	printf("Lower limit:\t");
	scanf("%lf", &ll);
	printf("Upper limit:\t");
	scanf("%lf", &ul);

	double val = 0.746824;
	printf("\nAnalytical value of integration:\t%lf\n", val);

	double newIntegral;
	double eps = 0.001000;

	//using Midpoint rule
	int count = 2;
	newIntegral = midpoint(ll, ul, count, 2);
	while (fabs(val - newIntegral) >= eps)
	{
		count++;
		newIntegral = midpoint(ll, ul, count, 2);
	} 

	printf("\nUsing Midpoint rule:-\n");
	printf("\tThe value of integral = %lf\n", newIntegral);
	printf("\tNo. of subintervals = %d\n", count);
	printf("\tThe error is = %lf\n", fabs(val - newIntegral));

	//using Trapezoidal rule
	count = 2;
	newIntegral = trapezoidal(ll, ul, count, 2);
	while (fabs(val - newIntegral) >= eps)
	{
		count++;
		newIntegral = trapezoidal(ll, ul, count, 2);
	}
	printf("\nUsing Trapezoidal rule:-\n");
	printf("\tThe value of integral = %lf\n", newIntegral);
	printf("\tNo. of subintervals = %d\n", count);
	printf("\tThe error is = %lf\n", fabs(val - newIntegral));

	//using Simpson's method
	count = 2;
	newIntegral = trapezoidal(ll, ul, count, 2);
	while (fabs(val - newIntegral) >= eps)
	{
		count += 2;
		newIntegral = simpsons(ll, ul, count, 2);
	}
	printf("\nUsing Simpson's rule:-\n");
	printf("\tThe value of integral = %lf\n", newIntegral);
	printf("\tNo. of subintervals = %d\n", count);
	printf("\tThe error is = %lf\n", fabs(val - newIntegral));
}
