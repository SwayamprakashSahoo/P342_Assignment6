//Program to evaluate the value of pi using Monte-Carlo method

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "mylib.h"


void main()
{
	int n = 10;
	FILE* fptr;
	fptr = fopen("C:/Users/sahoo/Desktop/P342/monteCarlo.txt", "w");
	if (fptr == NULL)
	{
		// File not created hence exit
		printf("\nUnable to create file.\n");
		exit(EXIT_FAILURE);
	}

	while (n <= 100000000)
	{
		double val = monteCarlo(n);
		fprintf(fptr, "%d\t%lf\n", n, val);
		
		if (n < 100000)
			n = n * 10;
		else
			n += 100000;
	}
	printf("\nEvaluation of pi using Monte-Carlo method completed.\nResults stored in location 'C:/Users/sahoo/Desktop/P342/monteCarlo.txt'");
}


/*************************************OUTPUT**********************************************************
------------------------------------------------------------------------------------------------------

Evaluation of pi using Monte-Carlo method completed.
Results stored in location 'C:/Users/sahoo/Desktop/P342/monteCarlo.txt'
*****************************************************************************************************/
