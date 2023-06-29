/* include header files */
#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - function that copies a string
 * @dest: destinaion string
 * @src: source string
 * @n: number of most bytes to be used from src
 * @a_idk
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	while ((index < n) && (src[index] != '\0'))
	{
		dest[index] = src[index];
		index += 1;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index += 1;
	}
	return (dest);
}
