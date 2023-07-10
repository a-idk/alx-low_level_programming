/* include header files */
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: input string
 * @a_idk
 *
 * Return: pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	/* initializing variables */
	int index = 0, x = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[index] != '\0')
	{
		index++;
	}
	s = malloc(sizeof(char) * (index + 1));
	/* check for null return by malloc */
	if (s == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x]; x++)
	{
		s[x] = str[x];
	}
	return (s);
}
