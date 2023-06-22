#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 *
 * @n: number of times the character \ should be printed
 * @a_idk
 */

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(32);
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
