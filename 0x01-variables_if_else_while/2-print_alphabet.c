#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to print lowercase alphabet
 *
 * Return: Always o (Success!)
 */

int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
		/* putchar('\n');*/
	}
	return (0);
}
