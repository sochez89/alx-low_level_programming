#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees two dimensional array previously created
 * @grid: inputted 2-D array to be freed
 * @height: repreents height of the grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
