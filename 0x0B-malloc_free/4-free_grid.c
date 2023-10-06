#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2d array
 * @grid 2d grid
 * @height: height dimension of grind
 * Description: frees memory of grind
 * Return: nothing
 *
 */
void free_grind(int **grind, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
