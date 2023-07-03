/* Include header files */
#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: input string
 * @needle: substring to compare
 * @a_idk
 * Return: pointer to s or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack, *n = needle;

		while (*h == *n && *n != '\0')
		{
			n++;
			h++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
