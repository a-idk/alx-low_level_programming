#include "main.h"
#include <stdio.h>

/**
 * main - function that prints the first 50 fibonacci numbers
 *
 * written by @a_idk
 * Return: Always 0 (Success!)
 */
int main(void)
{
	unsigned long sum;
	unsigned long f1 = 0;
	unsigned long f2 = 1;
	int tally;

	/* Begin for loop */
	for (tally = 0; tally < 50; tally++)
	{
		sum = f1 + f2;
		printf("%lu", sum);
		f1 = f2;
		f2 = sum;
		if (tally == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
