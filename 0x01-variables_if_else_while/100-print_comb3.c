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

	for (F_digit = '0'; F_digit <= '9'; F_digit++)
	{
		for (S_digit = F_digit + 1; S_digit <= '9'; S_digit++)
		{
			if (S_digit != F_digit)
			{
				putchar(F_digit);
				putchar(S_digit);
				if (F_digit == '8' && S_digit == '9')
					continue;
				putchar(',');
				putchar(' ');
			}}}
	putchar('\n');
	return (0);
}
