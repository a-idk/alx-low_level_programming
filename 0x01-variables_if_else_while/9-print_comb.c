#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to print lowercase alphabet
 *
 * Return: Always o (Success!)
 */

int main(void)
{
	int alp;

	for (alp = 48; alp <= 57; alp++)
	{
		putchar(alp);
		putchar(44);
		putchar(32);
		/* putchar('\n');*/
	}
	putchar('\n');
	return (0);
}
