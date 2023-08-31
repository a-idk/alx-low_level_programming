/* Title: 1-print_binary.c */
/* include header files */
#include <stddef.h>
#include "main.h"

/* Second time */

/**
 * print_binary - function that prints the binary representation of a number
 * @n: decimal number to be converted
 * @_idk
 *
 * Return: Nada!
 */

void print_binary(unsigned long int n)
{
	/* declaring variable and initializing */
	unsigned long int digit;
	int one_bit = 0, less_sig = 0, most_sig = 63, indx;

	for (indx = most_sig; indx >= less_sig; indx--)
	{
		digit = n >> indx; /* shifting bitwise right */
		if (digit & 1)
		{
			_putchar('1');
			one_bit += 1;
		}
		else if (one_bit)
		{
			_putchar('0');
		}
	}
	if (n == 0)
	{
		_putchar('0');
	}
}
