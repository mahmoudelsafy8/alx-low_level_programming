#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = calloc(nmemb, size);
	if (str == NULL)
		return (NULL);
	else
		return (str);
}
