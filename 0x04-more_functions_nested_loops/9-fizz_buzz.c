#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - function that prints the numbers from 1 to 100,
 * followed by a new line.
 * But multiples of 3 and 5 are 'Fizz' and 'Buzz' respectively
 *
 * @a_idk
 * Return: Always 0 (Success!)
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 != 0))
		{
			printf(" Fizz");
		}
		else if ((n % 3 != 0) && (n % 5 == 0))
		{
			printf(" Buzz");
		}
		else if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (n == 1)
		{
			printf("%d", n);
		}
		else
		{
			printf(" %d", n);
		}
	}
	printf("\n");
	return (0);
}
