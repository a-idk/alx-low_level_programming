#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to print numbers below for base ten
 *
 * Return: Always o (Success!)
 */

int main(void)
{
	int num = 0;

	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}
	printf("\n");
	return (0);
}
