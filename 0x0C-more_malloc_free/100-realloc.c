/* include header files */
#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated using malloc
 * @old_size: size in bytes of the allocated memory for ptr
 * @new_size: new size in bytes of the new memory block
 * @a_idk
 *
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	/* declaring variables */
	unsigned int i;
	char *old_p,  *p;

	/* ptr is NULL */
	if (!ptr)
	{
		return (malloc(new_size));
	}
	/* new_size == old_size */
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	/* allocating dynamic memory */
	p = malloc(new_size);
	old_p = ptr;
	if (new_size < old_size)
	{
		i = 0;
		while (i < new_size)
		{
			p[i] = old_p[i];
			i++;
		}
	}
	if (new_size > old_size)
	{
		i = 0;
		while (i < old_size)
		{
			p[i] = old_p[i];
			i++;
		}
	}
	free(ptr);
	return (p);
}
