#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @n: input
 * Return: n
 */
char *leet(char *n)
{
	int x;
	int y;
	char c[] = "aAeEoOtTlL";
	char i[] = "4433007711";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (n[x] == c[y])
			{
				n[x] = i[y];
			}
		}
	}
	return (n);
}
