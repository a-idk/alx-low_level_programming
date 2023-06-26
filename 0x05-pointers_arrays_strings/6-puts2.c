/* include header files */
#include "main.h"

/**
 * puts2 - function that printsevery other character of a string,
 * starting with the first character followed by a new line
 * @s: string
 * @a_idk
 * return: null
 */

void puts2(char *s)
{
	int length_s = 0, ch;
	char *a = s;

	while (*a != '\0')
	{
		length_s++;
		a++;
	}
	length_s--;
	for (ch = 0; ch <= length_s; ch++)
	{
		if (ch % 2 == 0)
		{
			_putchar(s[ch]);
		}
	}
	_putchar('\n');
}
