#include "main.h"

/**
 * print_alphabet - function that prints the alphabet in lowercase
 * written by @a_idk
 * Return: Always 0 (Success!)
 */
void print_alphabet(void)
{
	int alp;

	for (alp = 97; alp <= 122; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
