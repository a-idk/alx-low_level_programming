/* include header file */
#include <stdio.h>

/**
 * add - function that adds two integers
 * @a: first integer
 * @b: second integer
 * @a_idk coding
 *
 * Return: solution (int)
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - function that subtracts two integers
 * @a: first integer
 * @b: second integer
 * @a_idk coding
 *
 * Return: solution (int)
 */

int sub(int a, int b)
{
	return (a - b);
}


/**
 * mult - function that multiply two integers
 * @a: first integer
 * @b: second integer
 * @a_idk coding
 *
 * Return: solution (int)
 */

int mult(int a, int b)
{
	return (a * b);
}

/**
 * div - function that divides two integers
 * @a: first integer
 * @b: second integer
 * @a_idk coding
 *
 * Return: solution (int)
 */

int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by Zero\n");
		return (0);
	}
	return (a / b);
}


/**
 * mod - function that finds the modulus of two integers
 * @a: first integer
 * @b: second integer
 * @a_idk coding
 *
 * Return: solution (int)
 */

int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a % b);
}
