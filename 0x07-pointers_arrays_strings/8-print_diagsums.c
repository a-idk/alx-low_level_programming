/* include header files */
#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals
 *of a square matrix of integers.
 * @a: for matrix integers
 * @size: the actual size of the matrix
 * @a_idk
 * Return: VOID
 *
 */

void print_diagsums(int *a, int size)
{
	int i, add1 = 0, add2 = 0;

	for (i = 0; i < size; i++)
	{
		add1 = add1 + a[i];
		a = a + size;
	}
	a = a - size;
	for (i = 0; i < size; i++)
	{
		add2 = add2 + a[i];
		a = a - size;
	}
	printf("%d, %d\n", add1, add2);
}
