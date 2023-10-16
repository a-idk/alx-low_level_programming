/* Include header files */
#include "main.h"

/**
 * _strspn - function that gets the length of a prefix
 * @s: ingut string
 * @accept: prefix substring
 * @a_idk
 * Return: number of bytes (num)
 */

unsigned int _strspn(char *s, char *accept)
{
	int index;
	unsigned int num = 0;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				num = num + 1;
				break;
			}
			else if (accept[index + 1] == '\0')
			{
				return (num);
			}
		}
		s = s + 1;
	}
	return (num);
}
