#include "main.h"
/**
 * positive_or_negative - Return positive or negative or zero.
 * @i: input number
 * Return: no return
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
