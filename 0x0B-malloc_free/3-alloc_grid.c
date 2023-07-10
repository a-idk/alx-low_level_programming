/* include header files */
#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2d array of integers
 * @width: given width
 * @height: given height
 * @a_idk
 *
 * Return: pointer to _2d array
 */

int **alloc_grid(int width, int height)
{
	/* variable declaraion */
	int i, ii, **_2d;

	if ((height <= 0) || (width <= 0))
	{
		return (NULL);
	}
	_2d = malloc(sizeof(int *) * height);

	if (_2d == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		_2d[i] = malloc(sizeof(int) * width);

		if (_2d[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(_2d[i]);
			}
			free(_2d);
			return (NULL);
		}
	}
	for (i = 0; i < height; i = i + 1)
	{
		for (ii = 0; ii < width; ii = ii + 1)
		{
			_2d[i][ii] = 0;
		}
	}
	return (_2d);
}
