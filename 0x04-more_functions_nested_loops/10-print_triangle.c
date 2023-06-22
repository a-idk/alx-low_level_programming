#include "main.h"

/**
 * print_triangle - functions that prints a triangle, followed by a new line
 * @a_idk
 * @size: selected size of the triangle
 */

void print_triangle(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = a; b < size; b++)
			{
				_putchar(32);
			}
			for (b = 1; b <= a; b++)
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
