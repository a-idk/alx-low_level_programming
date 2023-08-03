/* Title: 2-get_bit.c */
/* include header file */
#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: decimal number to be converted
 * @index: starting from 0 of the bit you want to get
 * @_idk
 *
 * Return: value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/* declaring variable */
	int bin_digit;

	if (index > 63)
	{
		return (-1);
	}
	/* shifting bitwise right */
	bin_digit = ((n >> index) & 1);
	return (bin_digit);
}
