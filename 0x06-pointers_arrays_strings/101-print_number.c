/* include header files */
#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: integer to be printed
 * @a_idk
 * Return: Always 0 (Success!)
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		num = -n;
		_putchar(45);
	}
	if (num / 10 != 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
