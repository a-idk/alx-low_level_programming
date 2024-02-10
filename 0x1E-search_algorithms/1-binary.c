#include "search_algos.h"

/**
 * binary_search - function that searches for a value in an array
 * of integers using binary search algorithm
 * @array: ptr to first element of the array to search in
 * @size: no. of elements in array
 * @value: value to be searched for
 * @a_idk scripting
 *
 * Return: value index, else -1
 */

int binary_search(int *array, size_t size, int value)
{
	/* declaring variable */
	size_t index;
	size_t l_side;
	size_t r_side;

	/* if value not found */
	if (array == NULL)
	{
		return (-1);
	}
	for (l_side = 0, r_side = size - 1; r_side >= l_side;)
	{
		printf("Searching in array: ");
		for (index = l_side; index < r_side; index += 1)
		{
			printf("%d, ", array[index]);
		}
		printf("%d\n", array[index]);
		index = ((r_side - l_side) / 2) + l_side;
		/* printf('Value checked array[%lu] = [%d]\n', index, array[index]); */
		if (array[index] == value)
		{
			return (index);
		}
		if (array[index] <= value)
		{
			l_side = index + 1;
		}
		else
		{
			r_side = index - 1;
		}
	}
	return (-1);
}
