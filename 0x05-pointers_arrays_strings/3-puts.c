/* Include header files */
#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout
 * @str: string to print
 * @a_idk
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

