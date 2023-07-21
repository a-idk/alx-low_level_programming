/* include header files */
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers
 * @n: fixed paramter or argument, number of integers passed to the function
 * @separator: string to be printed between numbers
 * @a_idk
 *
 * Return: Nada!
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* declaring and initializing variable */
	unsigned int i = 0;
	va_list x;

	/* starting the iterating arguments of va_list x */
	va_start(x, n);

	while (i < n)
	{
		printf("%d", va_arg(x, int)); /* retrieve an argument */
		if ((separator != NULL) && (i != (n - 1)))
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	/* freeing the va_list x */
	va_end(x);
}
