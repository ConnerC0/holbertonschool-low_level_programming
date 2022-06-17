#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - creates a 2D grid
 * @width: width of grid
 * @height: height of grid
 * Return: pointer for grid
 */

int **alloc_grid(int width, int height)
{
	int y, x;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = (int **)malloc(sizeof(int *) * height);
	if (p == NULL)
		return (NULL);
	for (y = 0; y < height; y++)
	{
		p[y] = (int *)malloc(sizeof(int) * width);
		if (p[y] == NULL)
		{
			for (x = 0; x < y; x++)
				free(p[x]);
			free(p);
			return (NULL);
		}
		for (x = 0; x < width; x++)
			p[y][x] = 0;
	}
	return (p);
}
