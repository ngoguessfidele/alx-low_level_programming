#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid- creates the grid
 * @width: width
 * @height: height
 *
 * Return: pointer to grid
 */

int **alloc_grid(int width, int height)
{
	int **_grid;
	int i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	_grid = malloc(height * sizeof(int *));
	if (_grid == NULL)
	{
		free(_grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		_grid[i] = malloc(width * sizeof(int));
		if (_grid[i] == NULL)
		{
			for (i--; i > 0; i--)
			{
				free(_grid[i]);
			}
			free(_grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			_grid[i][j] = 0;
		}
	}
	return (_grid);
}
