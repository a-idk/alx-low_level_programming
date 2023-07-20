/* include header files */
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: given array
 * @size: array size
 * @cmp: pointer to function to be used to compare values
 * @a_idk
 *
 * Return: -1 if no match or if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	/* declaring and initializing variable */
	int index = 0;

	/* if no element match */
	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}
	while (index < size)
	{
		if (cmp(array[index]))
		{
			return (index);
		}
		index++;
	}
	return (-1);
}
