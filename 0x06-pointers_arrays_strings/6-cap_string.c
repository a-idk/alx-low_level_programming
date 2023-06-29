/* include header files */
#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @c: char string to be capitalized.
 * @a_idk
 * Return: c
 */

char *cap_string(char *c)
{
	int i = 0;

	while (c[i])
	{
		while (!(c[i] >= 'a' && c[i] <= 'z'))
		{
			i = i + 1;
		}
		if (c[i - 1] == ' ' ||
		c[i - 1] == '\t' ||
		c[i - 1] == '\n' ||
		c[i - 1] == ',' ||
		c[i - 1] == ';' ||
		c[i - 1] == '.' ||
		c[i - 1] == '!' ||
		c[i - 1] == '?' ||
		c[i - 1] == '"' ||
		c[i - 1] == '(' ||
		c[i - 1] == ')' ||
		c[i - 1] == '{' ||
		c[i - 1] == '}' ||
		i == 0)
		{
			c[i] = c[i] - 32;
		}
		i = i + 1;
	}
	return (c);
}
