/* include header file*/
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - function that allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: size of element
 * @a_idk
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	/* declare variables */
	unsigned int x = 0, num = nmemb * size;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	/* alocating dynamic memory */
	ptr = malloc(size * nmemb);
	/* checking for malloc Null value */
	if (ptr == NULL)
	{
		return (NULL);
	}
	/* fills memory with a constant byte */
	while (x < num)
	{
		*((char *)(ptr) + x) = 0;
		x++;
	}
	return (ptr);
}
