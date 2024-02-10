#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array
 * of integers using linear search algorithm
 * @array: ptr to first element of the array to search in
 * @size: no. of elements in array
 * @value: value to be searched for
 * @a_idk scripting
 *
 * Return: value index
 */

int linear_search(int *array, size_t size, int value)
{
	/* declaring variable */
	size_t index;

	/* if value not found */
	if (array == NULL)
	{
		return (-1);
	}
	for (index = 0; index < size; index += 1)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}
	}
	return (-1);
}
