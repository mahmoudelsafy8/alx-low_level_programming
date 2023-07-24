#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: input str
 */
void rev_string(char *s)
{
	int l, x;
	char y;

	for (l = 0; s[l] != '\0'; ++l)
		;
	for (x = 0; x < l / 2; x++)
	{
		y = s[x];
		s[x] = s[l - 1 - x];
		s[l - 1 - x] = y;
	}
}
