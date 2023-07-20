#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: input number
 * Return: 1 On Success 0 else
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
