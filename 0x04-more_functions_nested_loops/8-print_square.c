#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line
 * @size: selected size of the square
 * @a_idk
 */

void print_square(int size)
{
	if (size > 0)
	{
		int a, b;

		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
