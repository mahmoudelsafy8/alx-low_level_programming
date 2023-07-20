#include "main.h"
/**
 * positive_or_negative() - output positive if n is +
 * output 0 if n 0
 * output negative if n is -
 * @n: input number
 * Printf: print results
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
}
