/* Include header files */
#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 * including the terminating null byte (\0)
 * @dest: the buffer pointed to by
 * @src: the string pointed to by
 * @a_idk
 *
 * Return: (dest)
 */

char *_strcpy(char *dest, char *src)
{
	/* declaring variables */
	int count = 0, len_str = 0;

	while (*(src + len_str) != '\0')
	{
		len_str++;
	}
	for (count = 0 ; count < len_str ; count++)
	{
		dest[count] = src[count];
	}
	dest[len_str] = '\0';
	return (dest);
}
