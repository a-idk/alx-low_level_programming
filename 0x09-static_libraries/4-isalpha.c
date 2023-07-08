/* include header files */
#include "main.h"

/**
 * _isalpha - function that checks for alphabetic characters
 * @c: is the character to be determined whether in upper or lower case
 * @a_idk
 *
 * Return: Always 1 (Success!), else 0.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
