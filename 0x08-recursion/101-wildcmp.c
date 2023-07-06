/* include header files */
#include "main.h"

/**
 * wildcmp -function that compare strings
 * @s1: char pointer
 * @s2: char pointer
 * @a_idk
 *
 * Return: 1 if identical and 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		else
		{
			return (*s2 == '\0');
		}
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else
	{
		return (0);
	}
}
