#include "main.h"
/*
 * _strcat - appends the src string to the dest string.
 * _strcat - appends the src string to the dest string.
 *  @dest: input value.
 *  @src: input value.
 *  Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;
	/* dest array size*/
	x = 0;
	while (dest[x])
		x++;

	for (y = 0; src[y]; y++)
		dest[x++] = src[y];
	return (dest);
}
