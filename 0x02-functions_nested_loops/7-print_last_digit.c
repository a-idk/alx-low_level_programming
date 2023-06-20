#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a numberr
 * @n: is the integer whose last digit is to be printed
 * written by @a_idk
 * Return: Always 0 (Success!)
 */
int print_last_digit(int n)
{
	int lst_digit = n % 10;

	if (lst_digit < 0)
	{
		_putchar(-lst_digit + '0');
		return (-lst_digit);
	}
	else
	{
		_putchar(lst_digit + '0');
		return (lst_digit);
	}
}
