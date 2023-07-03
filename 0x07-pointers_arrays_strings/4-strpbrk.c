/* Include header files */
#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: input string
 * @accept: string to compare
 * @a_idk
 * Return: pointer to s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
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
		s = s + 1;
	}
	return ('\0');
}
