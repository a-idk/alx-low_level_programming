#include "main.h"

/**
 * _isupper - function checks for uppercase character
 * @c: character to be tested
 * Return: 1 or 0 if success or not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
