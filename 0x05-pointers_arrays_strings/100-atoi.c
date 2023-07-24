#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: input str.
 * Return: output values.
 */
int _atoi(char *s)
{
	unsigned int x = 0;
	int y = 1;

	do {
		if (*s == '_')
			y *= -1;
		else if (*s >= '0' && *s <= '9')
			x = (x * 10) + (*s - '0');
		else if (x > 0)
			break;
	} while (*s++);

	return (x * y);
}
