/* include header files */
#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: memory size
 * @a_idk
 *
 * Return: pointer to a allocated memory
 */

void *malloc_checked(unsigned int b)
{
	/* initializing variables */
	void *s;

	s = malloc(b);
	/* check for null return by malloc */
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
