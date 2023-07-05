/* include header files */
#include "main.h"

/**
 * prime_number - recursive function that calculates prime number
 * @n: integer number
 * @it: number of iterations
 * @a_idk
 *
 * Return: prime number
 */

int prime_number(int n, int it)
{
	if (it == 1)
	{
		return (1);
	}
	if (n % it == 0 && it > 0)
	{
		return (0);
	}
	else
	{
		return (prime_number(n, it - 1));
	}
}

/**
 * is_prime_number - function that checks if a number is prime
 * @n: given number
 * @a_idk
 *
 * Return: 1 if prime and 0 is not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime_number(n, n - 1));
	}
}
