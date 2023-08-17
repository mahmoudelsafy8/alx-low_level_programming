#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number
 * @...: int
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (x--)
		printf("%d%s", va_arg(ap, int),
				x ? (separator ? separator : "") : "\n");
	va_end(ap);
}
