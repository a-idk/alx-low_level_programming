#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to print three digit combination
 *
 * Return: Always o (Success!)
 */

int main(void)
{
	int F_digit;
	int S_digit;
	int T_digit;

	for (F_digit = '0'; F_digit <= '9'; F_digit++)
	{
		for (S_digit = F_digit + 1; S_digit <= '9'; S_digit++)
		{
			for (T_digit = S_digit + 1; T_digit <= '9'; T_digit++)
			{
				if ((S_digit != F_digit) != T_digit)
				{
					putchar(F_digit);
					putchar(S_digit);
					putchar(T_digit);
					if (F_digit == '7' && S_digit == '8')
					{
						continue;
					}
					putchar(',');
					putchar(' ');
				}}}}
	putchar('\n');
	return (0);
}
