/* Title: 5-flip__bit.sc */
/* include header file */
#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: decimal number to be converted
 * @m: flipping value
 * @_idk
 *
 * Return: value of the flipped num
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int indx, msb = 63, lsb = 0;
	int flip_num = 0;
	unsigned long int digit, exor;

	exor = n ^ m;

	for (indx = msb; indx >= lsb; indx--)
	{
		/* bitwise right shifting */
		digit = exor >> indx;

		if (digit & 1)
		{
			flip_num += 1;
		}
	}
	return (flip_num);
}
