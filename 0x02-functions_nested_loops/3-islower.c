#include "main.h"
/**
 * _islower -output 1 if a - else 0
 * c: char in ASCII
 * Return: On Seccess 1 else 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
