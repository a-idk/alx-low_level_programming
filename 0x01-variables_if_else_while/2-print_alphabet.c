#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to print lowercase alphabet
 *
 * Return: Always o (Success!)
 */

int main(void)
{
	int alp = 97;

	while (alp == 97 && alp < 123)
	{
		putchar(alp);
		alp = alp + 1;
	}
	return (0);
}
