/* include header files */
#include "main.h"

/**
 * sqrt_recursion - function that returns the natural square roots of a number
 * @n: input integer
 * @it: number of iterations
 * @a_idk
 *
 * Return: sqrt
 */

int sqrt_recursion(int n, int it)
{
	if (it * it == n)
	{
		return (it);
	}
	if (it * it > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_recursion(n, it + 1));
	}
}

/**
 * _sqrt_recursion - function that returns the natural square roots of a number
 * @n: input integer
 * @a_idk
 *
 * Return: sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt_recursion(n, 0));
	}
}
