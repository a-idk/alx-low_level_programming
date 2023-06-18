#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to print reverse lowercase alphabet
 *
 * Return: Always o (Success!)
 */

int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
	{
		putchar(alp);
		/* putchar('\n');*/
	}
	putchar('\n');
	return (0);
}
