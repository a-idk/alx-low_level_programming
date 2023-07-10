/* include header files */
#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of char,
 * and initializes it with a specific char
 * @size: the array size
 * @c: char that initializes
 * @a_idk
 *
 * Return: pointer to array, else NULL
 */

char *create_array(unsigned int size, char c)
{
	/* initializing variables */
	unsigned int x;
	char *s;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL) /* check for NULL */
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		s[x] = c;
	}
	return (s);
}
