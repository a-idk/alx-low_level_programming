/* include header files */
#include "main.h"

/**
 * puts_half - function that prints half of a string followed by a new line
 * @s: string
 * @a_idk
 * return: null
 */

void puts_half(char *s)
{
	int count, length_s = 0;
	int half;

	for (count = 0; s[count] != '\0'; count++)
	{
		length_s++;
	}
	half = (length_s / 2);
	if ((length_s % 2) == 1)
	{
		half = ((length_s + 1) / 2);
	}
	for (count = half; s[count] != '\0'; count++)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
