#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width
 * @height: height
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int **x;
	int y;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	x = malloc(sizeof(int *) * height);
	if (x == NULL)
		return (NULL);
	for (y = 0; y < height; y++)
	{
		x[y] = malloc(sizeof(int) * width);
		if (x[y] == NULL)
		{
			for (; y >= 0; y--)
				free(x[y]);
			free(x);
			return (NULL);
		}
	}
	for (y = 0; y < height; y++)
	{
		for (i = 0; i < width; i++)
			x[y][i] = 0;
	}
	return (x);
}
