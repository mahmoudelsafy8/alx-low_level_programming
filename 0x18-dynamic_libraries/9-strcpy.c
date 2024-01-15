#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: char type.
 * @src: char type.
 * Return: dest values.
 */
char *_strcpy(char *dest, char *src)
{
	int x = -1;

	do {
		x++;
		dest[x] = src[x];
	} while (src[x] != '\0');

	return (dest);
}
