#include "main.h"
/**
 * _isalpha - output 1 if is alpha - else 0
 * @c: char in ASCII
 * Return: On Seccess 1 else 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
