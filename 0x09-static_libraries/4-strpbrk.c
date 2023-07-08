/* Include header files */
#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: input string
 * @accept: string to compare
 * @a_idk
 *
 * Return: s (Success!), else  or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	/* declaring integer variable */
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
