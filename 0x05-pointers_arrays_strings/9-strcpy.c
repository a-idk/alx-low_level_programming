/* Include header files */
#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src
 * including the terminating null byte (\0)
 * @dest: the buffer pointed to by
 * @src: the string pointed to by
 * @a_idk
 * Return: string character (dest)
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0, length = 0;

	while (*(src + length) != '\0')
	{
		length++;
	}
	for (count = 0 ; count < length ; count++)
	{
		dest[count] = src[count];
	}
	dest[length] = '\0';
	return (dest);
}
