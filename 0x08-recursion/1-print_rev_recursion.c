/* include header files */
#include "main.h"

/**
 * _print_rev_recursion - recursive functoin that prints a string in reverse.
 * @s: input string
 * @a_idk
 *
 * Return: VOID
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
