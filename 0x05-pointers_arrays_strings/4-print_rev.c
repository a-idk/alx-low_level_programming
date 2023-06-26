/* include header files */
#include "main.h"

/**
 * print_rev - function that prints string in reverse
 * @s: string
 * @a_idk
 * return: null
 */

void print_rev(char *s)
{
	int length_s = 0;
	int rev_count;

	while (*s != '\0')
	{
		length_s++;
		s++;
	}

	s = s - 1;

	for (rev_count = length_s; rev_count > 0; rev_count--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
