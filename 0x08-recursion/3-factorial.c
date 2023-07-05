/* include header files */
#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: n factorial
 * @a_idk
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
