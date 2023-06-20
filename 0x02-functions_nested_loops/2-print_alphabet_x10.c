#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet in lowercase
 * written by @a_idk
 * Return: Always 0 (Success!)
 */
void print_alphabet_x10(void)
{
	int alp;
	int i = 0;

	while (i < 10)
	{
		for (alp = 97; alp <= 122; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
		i++;
	}
}
