/* include main header files */
#include "main.h"

/**
 * _isdigit - function that for a digit 0 through  9
 * @c: char to be checked
 * @a_idk
 *
 * Return: 1 (Success), else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
