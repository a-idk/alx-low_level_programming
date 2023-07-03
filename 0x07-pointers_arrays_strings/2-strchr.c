/* Include header files */
#include "main.h"

/**
 * *_strchr - function that locates a character in a string
 * @s: the input string
 * @c: Character to look out for
 * @a_idk
 * Return: pointer to first occurence
 */

char *_strchr(char *s, char c)
{
	int index = 0;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
		{
			return (&s[index]);
		}
	}
	return (0);
}
