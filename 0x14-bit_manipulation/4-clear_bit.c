/* Title: 4-clear_bit.c */
/* include header file */
#include "main.h"

/**
 * clear_bit - function that sets the value of a given bit to 0
 * @n: decimal number to be converted
 * @index: starting from 0 of the bit you want to get
 * @_idk
 *
 * Return: value of the bit at index i, else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/* considerig the MSB */
	if (index <= 63)
	{
		*n = (*n & (~(1UL << index)));
		return (1);
	}
	else
	{
		return (-1);
	}
}
