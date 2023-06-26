/* include header files */
#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @x: first integer to swap
 * @y: second integer to swap
 * @sw: switching key
 * @a_idk
 * Return: null
 */

void swap_int(int *x, int *y)
{
	int sw;

	sw = *x;
	*x = *y;
	*y = sw;
}

