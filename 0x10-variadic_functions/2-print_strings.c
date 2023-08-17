#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number
 * @...: int
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int x = n;
	char *str;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (x--)
		printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nil)",
				x ? (separator ? separator : "") : "\n");
	va_end(ap);
}
