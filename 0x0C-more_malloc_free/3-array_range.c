#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: min int
 * @max: max int
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int x;
	int y;
	int *ptr;

	if (min > max)
		return (NULL);
	x = max - min + 1;
	ptr = malloc(sizeof(int) * x);
	if (!ptr)
		return (NULL);
	for (y = 0; y < x; y++)
		ptr[y] = min++;
	return (ptr);
}
