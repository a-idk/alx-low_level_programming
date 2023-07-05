/* include header files */
#include "main.h"
#include <stdlib.h>

/**
 * _puts_recursion - recursive functionthat prints a string,
 * followed by a newline.
 * @s: input string
 * @a_idk
 *
 * Return: Null/Void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
