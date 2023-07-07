/* include header files */
#include "main.h"
#include <stdio.h>

/**
 * convert - function that converts ascii to intefer
 * @str: given string
 * @a_idk
 *
 * Return: integer num
 */

int convert(char *str)
{
	int index = 0, num = 0, dig = 0, length = 0, a = 0, b = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	while ((b == 0) && (index < length))
	{
		if (str[index] == 45)
		{
			++a;
		}
		if (str[index] >= 48 && str[index] <= 57)
		{
			dig = str[index] - 48;
			if (a % 2)
			{
				dig = -dig;
			}
			num = num * 10 + dig;
			b = 1;
			if (str[index + 1] < 48 || str[index + 1] > 57)
			{
				break;
			}
			b = 0;
		}
		index++;
	}
	if (b == 0)
	{
		return (0);
	}
	return (num);
}

/**
 * main - function that multiplies two numbers
 * @argc: number of arguments in command line
 * @argv: array of arguments
 * @a_idk
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int mul, x, y;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	/* Assigning numbers to integers */
	x = convert(argv[1]);
	y = convert(argv[2]);

	/* Mulitply both numbers */
	mul = x * y;
	printf("%d\n", mul);
	return (0);
}
