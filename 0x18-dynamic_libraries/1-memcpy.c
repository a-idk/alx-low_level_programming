/* include header files */
#include "main.h"

/**
 * *_memcpy - funtion that copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to be copied
 * @a_idk
 * Return: pointer to destination memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int count = n, index = 0;

	for (index = 0; index < count; index++)
	{
		dest[index] = src[index];
		n = n - 1;
	}
	return (dest);
}
