/* include header files */
#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum range
 * @max: maximum range
 * @a_idk
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	/* variable declaration */
	int *p, size = 0, x = 0;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min) + 1;
	/* allocating dynamic memory */
	p = malloc(sizeof(int) * size);
	/* checking for null value */
	if (p == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		p[x] = min++; /* *(p + x) = min + x; */
		x++;
	}
	return (p);
}
