#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9
 *
 * Written by @a_idk
 * return: void
 */

void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
