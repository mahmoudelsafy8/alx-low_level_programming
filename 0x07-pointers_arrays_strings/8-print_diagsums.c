#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: input
 * @size: input
 */
void print_diagsums(int *a, int size)
{
	int s1 = 0;
	int s2 = 0;
	int x;

	for (x = 0; x < size; x++)
	{
		s1 += a[x];
		s2 += a[size - x - 1];
		a += size;
	}
	printf("%d, %d\n", s1, s2);
}
