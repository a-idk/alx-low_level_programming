/* include header files */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints the minimum number of coins to make change
 * for an amount of money
 * @argc: number of command line arguments
 * @argv: array of arguments
 * @a_idk
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int n, coin [] = {25, 10, 5, 2, 1}, i, amount;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	amount = 0;
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; ((i < 5) && (n >= 0)); i++)
	{
		while (n >= coin[i])
		{
			amount = amount + 1;
			n = n - coin[i];
		}
	}
	printf("%d\n", amount);
	return (0);
}
