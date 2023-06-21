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
	unsigned long int sum = 0;
	int a;
	unsigned long int b = 1;
	unsigned long int c = 2;
	unsigned long int new;

	/* Begin for loop */
	for (a = 1; a <= 33; ++a)
	{
		if (((b % 2) == 0) && (b < 4000000))
		{
			sum = sum + b;
		}
		new = b + c;
		b = c;
		c = new;
	}
	printf("%lu\n", sum);
	return (0);
}
