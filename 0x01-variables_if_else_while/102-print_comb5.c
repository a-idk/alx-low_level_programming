#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to print two digit combination
 *
 * Return: Always o (Success!)
 */

int main(void)
{
	int F_digit;
	int S_digit;

	for (F_digit = 0; F_digit <= 98; F_digit++)
	{
		for (S_digit = F_digit + 1; S_digit <= 99; S_digit++)
		{
			putchar((F_digit / 10) + '0');
			putchar((F_digit % 10) + '0');
			putchar(' ');
			putchar((S_digit / 10) + '0');
			putchar((S_digit % 10) + '0');
			if (F_digit == 98 && S_digit == 99)
				continue;
			putchar(',');
			putchar(' ');
			}}
	putchar('\n');
	return (0);
}
