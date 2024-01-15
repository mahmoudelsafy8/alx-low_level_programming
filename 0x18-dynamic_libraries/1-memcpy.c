#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: memory area
 * @src: memory copies
 * @n: bytes number
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
