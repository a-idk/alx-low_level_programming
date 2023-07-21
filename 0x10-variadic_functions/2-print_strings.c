/* include header files */
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings
 * @n: fixed paramter or argument, number of integers passed to the function
 * @separator: string to be printed between strings
 * @a_idk
 *
 * Return: Nada!
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	/* declaring and initializing variable */
	unsigned int i = 0;
	char *s;
	va_list x;

	/* starting the iterating arguments of va_list x */
	va_start(x, n);

	while (i < n)
	{
		/* retrieve an argument */
		s = va_arg(x, char *);

		/* when one of the string is NULL */
		if (s == NULL)
		{
			printf("(nil)");
		} else
		{
			printf("%s", s);
		}
		/* when separator is not NULL */
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
