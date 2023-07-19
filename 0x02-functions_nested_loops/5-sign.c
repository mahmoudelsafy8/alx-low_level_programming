#include "main.h"
/**
 * print_sign - output 1 if (n > 0)- else 0 if (n == 0) - else -1 if (n < 0).
 * @n: input number
 * Return: 1 if (n > 0)- else 0 if (n == 0) - else -1 if (n < 0).
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
