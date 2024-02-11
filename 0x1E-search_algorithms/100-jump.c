#include "search_algos.h"

/**
 * jump_search - function that searches for a value in an array
 * of integers using jump search algorithm
 * @array: ptr to first element of the array to search in
 * @size: no. of elements in array
 * @value: value to be searched for
 * @a_idk scripting
 *
 * Return: value index, else -1
 */

int jump_search(int *array, size_t size, int value)
{
	/* declaring variable */
	size_t index;
	size_t leap;
	size_t move;

	move = sqrt(size);
	/* if value not found */
	if (size == 0 || array == NULL)
	{
		return (-1);
	}
	for (index = leap = 0; leap < size && array[leap] < value;)
	{
		printf("Value checked array [%ld] = [%d]\n", leap, array[leap]);
		index = leap, leap = leap + move;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", index, leap);
	/* if (leap > size - 1)	leap = leap; else leap = size - 1; */
	leap = (leap > size - 1) ? size - 1 : leap;
	for (; index < leap && array[index] < value; index += 1)
	{
		printf("Value checked array [%ld] = [%d]\n", index, array[index]);
	}
	printf("Value checked array [%ld] = [%d]\n", index, array[index]);
	if (array[index] == value)
		return ((int)index);
	else
		return (-1);
	return (0);
}
