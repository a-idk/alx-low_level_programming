/* include header files */
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: fixed paramter or argument
 * @a_idk
 *
 * Return: 0 if n=0 else unsigned int sum
 */

int sum_them_all(const unsigned int n, ...)
{
	/* declaring and initializing variable */
	int result = 0;
	unsigned int index;
	va_list x;

	if (n == 0)
	{
		return (0);
	}
	/* starting the iterating arguments of va_list x */
	va_start(x, n);

	for (index = 0; index < n; index++)
	{
		result += va_arg(x, int); /* retrieve an argument */
	}
	/* freeing the va_list x */
	va_end(x);
	return (result);
}
