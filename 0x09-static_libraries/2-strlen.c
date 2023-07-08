/* include main header files */
#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string
 * @a_idk
 *
 * Return: length (len_s)
 */

int _strlen(char *s)
{
	/* declaring and initializing variables */
	int len_s = 0;

	while (*s != '\0')
	{
		len_s++;
		s++;
	}
	return (len_s);
}

