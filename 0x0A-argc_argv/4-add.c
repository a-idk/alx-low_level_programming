/* include header files */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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
	int index, x, add = 0;
	char *s;

	if (argc > 1)
	{
		for (index = 1; index < argc; index++)
		{
			s = argv[index];
			for (x = 0; s[x] != '\0'; x++)
			{
				if (s[x] < 48 || s[x] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (index = 1; index < argc; index++)
	{
		add = add + atoi(argv[index]);
	}

	printf("%d\n", add);
	return (0);
}
