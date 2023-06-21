#include "main.h"
#include <stdio.h>

/**
 * main - function that finds and prints the sum of the even valued terms
 * followed by a new line
 *
 * written by @a_idk
 * Return: Always 0 (Success!)
 */
int main(void)
{
	/* Initialising variables */
	int a = 0;
	long int b = 1;
	long int c = 2;
	long int sum = c;

	/* Begin the while loop */
	while ((c + b) < 4000000)
	{
		c = c + b;
		if (c % 2 == 0)
		{
			sum += c;
		}
		b = c - b;
		++a;
	}
	printf("%ld\n", sum);
	return (0);
}
