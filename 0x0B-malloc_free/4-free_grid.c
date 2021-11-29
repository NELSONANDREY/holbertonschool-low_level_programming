#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - free alloc
 * @grid: int grid
 * @height: int height
*/
void free_grid(int **grid, int height)
{
	short int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
