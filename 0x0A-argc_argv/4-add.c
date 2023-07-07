/* include header files */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * _num - function that checks the given string for digit
 * @s: given string
 * @a_idk
 *
 * Return: Always 0 (Success)
 */

int _num(char *s)
{
	unsigned int i = 0;

	/* loop to count string */
	while (i < strlen(s))
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * main - function that adds positive numbers
 * @argc: number of command line arguments
 * @argv: array of arguments
 * @a_idk
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{
	int tally = 1, s2i, result = 0;

	while (tally < argc)
	{
		if (_num(argv[tally]))
		{
			s2i =atoi(argv[tally]);
			result = result + s2i;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		tally++;
	}
	printf("%d\n", result);
	return (0);
}
