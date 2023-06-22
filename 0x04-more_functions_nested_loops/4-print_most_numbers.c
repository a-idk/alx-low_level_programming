#include "main.h"

/**
 * print_most_numbers - function that prints numbers except 2 and 4
 *
 * Written by @a_idk
 * return: void
 */

void print_most_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		if (!(num == 50 || num == 52))
			_putchar(num);
	}
	_putchar('\n');
}
