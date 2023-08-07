#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: input str
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	int x = 0;
	int size = 0;
	char *ml;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
		;

	ml = malloc(size * sizeof(*str + 1));
	if (ml == 0)
		return (NULL);

	else
	{
		for (; x < size; x++)
			ml[x] = str[x];
	}
	return (ml);
}
