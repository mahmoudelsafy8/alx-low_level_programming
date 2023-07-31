#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: starting of memory
 * @b: desired value
 * @n: input bytes to change
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
