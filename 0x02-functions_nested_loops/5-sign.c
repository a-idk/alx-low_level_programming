#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 * @n: is the integer whose sign is to be printed
 * written by @a_idk
 * Return: Always 1, 0, -1 (Success!)
 */
int print_sign(int n)
{
	if  (n >= 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
