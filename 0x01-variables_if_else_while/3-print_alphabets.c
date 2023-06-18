#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to print all alphabets
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
	/* putchar('\n'); */
	for (alp = 'A'; alp <= 'Z'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
