#include "main.h"

/**
 * print_line - function thatdraws a straight line in the terminal
 * @n: number of times the character '_' should be printed
 * @a_idk
 */

void print_line(int n)
{
	if (n > 0)
	{
		int a;

		for (a = 1; a <= n; a++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
