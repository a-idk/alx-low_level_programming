#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a sorted array
 * of integers using interpolation search algorithm
 * @array: ptr to first element of the array to search in
 * @size: no. of elements in array
 * @value: value to be searched for
 * @a_idk scripting
 *
 * Return: value index, else -1
 */

int interpolation_search(int *array, size_t size, int value)
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
	for (l_side = 0, r_side < size - 1; r_side >= 1;)
	{
		index = l_side + (((double)(r_side - l_side) /
					(array[r_side] - array[l_side])) * (value - array[l_side]));
		if (index < size)
		{
			printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		}
		else
		{
			printf("Value checked array[%ld] is out of range\n", index);
			break;
		}
		if (array[index] == value)
		{
			return (index);
		}
		if (array[index] > value)
		{
			r_side = index - 1;
		}
		else
		{
			l_side = index + 1;
		}
	}
	return (-1);
}
