#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Entry point
 * Description: Frees a 2-D grid previously created by your alloc_grid function
 * @grid: Integer
 * @height: Integer
 * Return: Int
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
