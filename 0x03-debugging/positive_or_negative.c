#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point for function main to print +ve or -ve
 *
 * Return: Always 1 (Success!)
 */
int positive_or_negative(int n)
{
	/* srand(time(0)); */
	/* n = rand() - RAND_MAX / 2; */
	/* my solution code */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
