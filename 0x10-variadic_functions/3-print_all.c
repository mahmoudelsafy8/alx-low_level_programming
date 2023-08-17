#include "variadic_functions.h"
#include <stdarg.h>
/**
 * format_char - format for char
 * @separator: string to be printed between the strings
 * @ap: pointer
 */
void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}
/**
 * format_int - format for int
 * @separator: string to be printed between the strings
 * @ap: pointer
 */
void format_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}
/**
 * format_float - format for float
 * @separator: string to be printed between the strings
 * @ap: pointer
 */
void format_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}
/**
 * format_string - format for str
 * @separator: string to be printed between the strings
 * @ap: pointer
 */
void format_string(char *separator, va_list ap)
{
	char *str = va_arg(ap, char *);

	switch ((int)(!str))
	case 1:
		str = "(nil)";
		printf("%s%s", separator, str);
}
/**
 * print_all - prints anything.
 * @format: format str
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	int y;
	char *separator = "";
	va_list ap;
	token_t token[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format && format[x])
	{
		y = 0;
		while (tokens[y].token)
		{
			if (format[x] == tokens[y].token[0])
			{
				tokens[y].f(separator, ap);
				separator = ", ";
			}
			y++;
		}
		x++;
	}
	printf("\n");
	va_end(ap);
}
