/* Title: 3-set_bit.c */
/* include header file */
#include "main.h"

/* second chance */

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: decimal number to be converted
 * @index: starting from 0 of the bit you want to set
 * @a_idk
 *
 * Return: 1 if it worked else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/* considerig the MSB */
	if (index <= 63)
	{
		*n = (*n | (1UL << index));
		return (1);
	}
	else
		return (-1);
}
