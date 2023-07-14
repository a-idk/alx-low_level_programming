/* include header files */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - function that multiplies two +ve numbers
 * @argc: number of arguments
 * @argv: array of argument
 * @a_idk
 *
 * Return: Nada!
 */

int main(int argc, char *argv[])
{
	/* declaring variables */
	int index1, index2;
	unsigned long mul, num1, num2;

	/* ensuring just two arguments are passed */
	if ((argc < 3) || (argc > 3))
	{
		printf("Error\n");
		exit(98);
	}
	for (index1 = 1; index1 < argc; index1++)
	{
		for (index2 = 0; argv[index1][index2] != '\0'; index2++)
		{
			/* Checking for digits */
			if (argv[index1][index2] < '0' || argv[index1][index2] > '9')
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	/* setting to long variable */
	num1 = atol(argv[1]);
	num2 = atol(argv[2]);
	mul = num1 * num2;
	printf("%lu\n", mul);
	return (0);
}
