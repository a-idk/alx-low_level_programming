/* Include main  header files */
#include "main.h"
#include <stdio.h>

/**
 * *_strncat - function that concatenates two strings
 * given n bytes from the appending string
 * @dest: string to be appended
 * @src: source string
 * @n: number of bytes
 * @a_idk
 *
 * Return: char (Suceess!)
 */

char *_strncat(char *dest, char *src, int n)
{
	/* declaring variables */
	int a = 0, length_dest = 0;

	while (dest[a++])
	{
		length_dest++;
	}
	for (a = 0; src[a] && a < n; a++)
	{
		dest[length_dest++] = src[a];
	}
	return (dest);
}
