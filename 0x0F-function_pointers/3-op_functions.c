/* include header file */
#include "3-calc.h"

/* function declarations */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - function that returns the sum of a and b
 * @a: first given number
 * @b: Second given number
 * @a_idk
 *
 * Return: Sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that returns the difference a and b
 * @a: first given number
 * @b: Second given number
 * @a_idk
 *
 * Return: difference (a-b)
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that returns the product of a and b
 * @a: first given number
 * @b: Second given number
 * @a_idk
 *
 * Return: mul (a*b)
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that returns the division of a and b
 * @a: first given number
 * @b: Second given number
 * @a_idk
 *
 * Return: division (a/b)
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that returns the remainder of division of a and b
 * @a: first given number
 * @b: Second given number
 * @a_idk
 *
 * Return: remainder (a%b)
 */

int op_mod(int a, int b)
{
	return (a % b);
}
