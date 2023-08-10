#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: input str
 * @s2: input str
 * @n: int
 * Return: pointer shall point to a newly allocated space in memory,
 * which contains s1,
 * followed by the first n bytes
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int s1_l = 0;
	unsigned int s2_l = 0;
	unsigned int x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (x = 0; s1[x] != '\0'; x++)
		s1_l++;
	for (x = 0; s2[x] != '\0'; x++)
		s2_l++;
	str = malloc(sizeof(char) * (s1_l + n) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	if (n >= s2_l)
	{
		for (x = 0; s1[x] != '\0'; x++)
			str[x] = s1[x];
		for (x = 0; s2[x] != '\0'; x++)
			str[s1_l + x] = s2[x];
		str[s1_l + x] = '\0';
	}
	else
	{
		for (x = 0; s1[x] != '\0'; x++)
			str[x] = s1[x];
		for (x = 0; x < n; x++)
			str[s1_l + x] = s2[x];
		str[s1_l + x] = '\0';
	}
	return (str);
}
