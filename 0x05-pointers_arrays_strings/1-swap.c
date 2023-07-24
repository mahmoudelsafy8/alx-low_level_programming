#include "main.h"
/**
 * swap_int - that swaps the values of two integers.
 * @a: input int
 * @b: input int
 */
void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
