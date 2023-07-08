/* Include required header files */

#include "main.h"
#include <stdio.h>

/**
 * *_strcat - function that concatenates two strings
 * @dest: string to be appended
 * @src: source string
 * @a_idk
 *
 * Return: char (Suceess!)
 */

char *_strcat(char *dest, char *src)
{
	int First = 0;
	int Second;

	/* loop begins */
	while (dest[First] != '\0')
	{
		First++;
	}
	Second = 0;
	while (src[Second] != '\0')
	{
		dest[First] = src[Second];
		Second++;
		First++;
	}
	dest[First] = '\0';
	return (dest);
}
