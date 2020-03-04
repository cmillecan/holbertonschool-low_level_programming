#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int **x;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	x = malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
	{
		x[i] = malloc(sizeof(int) * width);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			x[i][j] = 0;
		}
	}

	return (x);
}
