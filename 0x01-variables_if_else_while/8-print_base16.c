#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to print hexadecimal
 *
 * Return: Always o (Success!)
 */

int main(void)
{
	char alp;

	for (alp = '0'; alp <= '9'; alp++)
	{
		putchar(alp);
		/* putchar('\n');*/
	}
	/* putchar('\n'); */
	for (alp = 'a'; alp <= 'f'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
