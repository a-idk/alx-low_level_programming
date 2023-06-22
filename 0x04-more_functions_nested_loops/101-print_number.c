#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: selected number to be printed
 * @a_idk
 * Return: Null!
 */

void print_number(int n)
{
	unsigned int a;

	if (n < 0)
	{
		a = -n;
		_putchar(45);
	}
	else
	{
		a = n;
	}
	if (a / 10)
	{
		print_number(a / 10);
	}
	_putchar((a % 10) + 48);
}
