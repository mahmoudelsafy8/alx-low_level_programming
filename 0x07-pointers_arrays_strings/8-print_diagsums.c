#include "main.h"
#include "stdio.h"
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
	int y;

	for (x = 0; x <= (size * size); x = x + size + 1)
		s1 = s1 + a[x];
	for (y = size - 1; y <= (size * size) - size; 0; y = y + size - 1)
		s2 = s2 + a[y];
	printf("%d, %d\n", s1, s2);
}
