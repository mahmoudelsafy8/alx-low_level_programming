#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number
 * @...: int
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int s = 0;
	int x = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	for (x--)
		s += va_arg(ap, int);
	va_end(ap);
	return (s);
}
