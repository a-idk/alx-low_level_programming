/* Title: 0-binary_to_uint.c */
/* include header files */
/* Second chance */
#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to a sctring of 0 and 1 chars
 * @_idk
 *
 * Return: unsigned int or 0 if char other than 0,1, or NULL in b
 */

unsigned int binary_to_uint(const char *b)
{
	/* declaring variable and initializing */
	int indx;
	unsigned int d_num = 0;

	if (b == NULL)
		return (0);
	for (indx = 0; b[indx]; indx++)
	{
		if (b[indx] == '0' || b[indx] == '1')
			d_num = (b[indx] - '0') + 2 * d_num; /* nth bit x 2^(n-1) */
		else
			return (0);
	} return (d_num);
}

