#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: str to get length.
 * Return: length value.
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s++)
		l++;
	return (l);
}
