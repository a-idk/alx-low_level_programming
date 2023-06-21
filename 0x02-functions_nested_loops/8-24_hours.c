#include "main.h"

/**
 * jack_bauer - function that prints every minutes of the day
 *
 * written by @a_idk
 * Return: Always 0 (Success!)
 */
void jack_bauer(void)
{
	int a;
	int b;

	a = 0;
	/* nested loop begins */
	while (a < 24)
	{
		b = 0;
		while (b < 60)
		{
			_putchar((a / 10) + 48);
			_putchar((a % 10) + 48);
			_putchar(58);
			_putchar((b / 10) + 48);
			_putchar((b % 10) + 48);
			b++;
			_putchar('\n');
		}
		a++;
	}
}
