#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees two dimension array
 * @grid: two dimension grid
 * @height: dimension of grid height
 * Description: frees grid memory
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
