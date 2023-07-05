/* include header files */
#include "main.h"

/**
 * _strlen_recursion - recursive function that returns length of a string
 * @s: input string
 * @a_idk
 *
 * Return: len_str
 */

int _strlen_recursion(char *s)
{
	int len_str = 0;

	if (*s)
	{
		len_str = len_str + 1;
		len_str = len_str +  _strlen_recursion(s + 1);
	}
	return (len_str);
}
