/* include header files */
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array
 * @array: array pointer
 * @size: array size
 * @action: pointer to the needed function
 * @a_idk
 *
 * Return: Nada!
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* declaring and initializing variable */
	unsigned int index = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}
	while (index < size)
	{
		action(array[index]);
		index++;
	}
}
