#include "main.h"

/**
 * more_numbers - print more numbers
 * written by @a_idk
 */

void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			if (j >= 10)
			{
				_putchar('1');
			}
			_putchar (j % 10 + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
