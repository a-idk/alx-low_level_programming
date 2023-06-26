/* Include header files */
#include "main.h"

/**
 * print_array - function that prints "n" elements of an array
 * @a: array itself
 * @n: is the number of elements of the array to be printed
 * @a_idk
 * Return: null
 */
void print_array(int *a, int n)
{
	int elements;

	for (elements = 0; elements < (n - 1); elements++)
	{
		printf("%d, ", a[elements]);
	}
		if (elements == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
	printf("\n");
}
