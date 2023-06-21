#include "main.h"
#include <stdio.h>

/**
 * main - list natural numbers less than 1024 in particular order
 *
 * written by @a_idk
 * Return: Always 0 (Success!)
 */
int main(void)
{
	int sum;
	int a;

	/* Begin for loop */
	for (a = 0; a < 1024; a++)
	{
		if (((a % 3) == 0) || ((a % 5) == 0))
		{
			sum = sum + a;
		}
	}
	printf("%d\n", sum);

	return (0);
}
