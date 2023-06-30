/* include header files */
#include "main.h"

/**
 * rev_array - function that reverses an array
 * @n: integer input
 * @a_idk
 * Return: 0
 */

void rev_array(char *n)
{
	int index1 = 0, index2 = 0;
	char sw1;

	while (*(n + index1) != '\0')
		index1 = index1 + 1;
	index1 = index1 - 1;
	for (index2 = 0; index2 < index1; index2++, index1--)
	{
		sw1 = *(n + index2);
		*(n + index2) = *(n + index1);
		*(n + index1) = sw1;
	}
}

/**
 * infinite_add - function that adds 2 numbers together
 * @n1: 1st number to add
 * @n2: 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * @a_idk
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int over = 0, i = 0, j = 0, digits = 0, val1 = 0, val2 = 0;
	int temp_2 = 0;

	while (*(n1 + i) != '\0')
		i = i + 1;
	while (*(n2 + j) != '\0')
		j = j + 1;
	i = i - 1;
	j = j - 1;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || over == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		temp_2 = val1 + val2 + over;
		if (temp_2 >= 10)
			over = 1;
		else
			over = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_2 % 10) + '0';
		digits = digits + 1;
		j = j - 1;
		i = i - 1;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_array(r);
	return (r);
}
