#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: input
 * @size: input
 */
void print_diagsums(int *a, int size)
{
	int s1;
	int s2;
	int y;

	s1 = 0;
	s2 = 0;

	for (y = 0; y < size; y++)
	{
		s1 = s1 + a[y * size + y];
	}
	for (y = size - 1; y >= 0; y--)
	{
		s1 += a[y * size + (size - y - 1)];
	}
	printf("%d, %d\n", s1, s2);
}
