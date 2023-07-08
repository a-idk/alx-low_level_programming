/* include header files */
#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @c: is the character to be determined whether in upper or lower case
 * @a_idk
 *
 * Return: Always 0 (Success!)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
