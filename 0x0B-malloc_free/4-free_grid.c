/* include header files */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - func that frees 2d grid in 3-alloc_grid.c script
 * @grid: 2d array
 * @height: height of grid
 * @a_idk
 *
 * Return: Nada!
 */

void free_grid(int **grid, int height)
{
	/* declaring variable */
	int index;

	/* freeing the 2d array/grid */
	for (index = 0; index < height; index = index + 1)
	{
		free(grid[index]);
	}
	free(grid);
}
