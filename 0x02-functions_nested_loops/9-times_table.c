#include "main.h"

/**
 * times_table - function that prints the 9 times table starting with 0
 *
 * written by @a_idk
 * Return: Always 0 (Success!)
 */
void times_table(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;

	/* For loop begins here */
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;
			if (c > 9)
			{
				d = c % 10;
				e = (c - d) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(e + 48);
				_putchar(d + 48);
			}
			else
			{
				if (b != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(c + 48);
			}
		}
		_putchar('\n');
	}
}
