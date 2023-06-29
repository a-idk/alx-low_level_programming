/* include header files */
#include "main.h"

/**
 * string_toupper - function that changes all lowercase to uppercase
 * @c: pointer variable
 * @a_idk
 * Return: n
 */

char *string_toupper(char *c)
{
	int index = 0;

	while (c[index] != '\0')
	{
		if ((c[index] >= 'a') && (c[index] <= 'z'))
		{
			c[index] = c[index] - 32;
		}
		index++;
	}
	return (c);
}
