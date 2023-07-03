/* Include header files */
#include "main.h"

/**
 * _memset - function that fills memory
 * with a constant byte
 * @s: memory area
 * @b: constant byte value to be used for the filling
 * @n: byte of memory to be filled
 * @a_idk
 * Return: pointer t the memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int index = 0;

	for (index = 0; n > 0; index++)
	{
		s[index] = b;
		n = n - 1;
	}
	return (s);
}
