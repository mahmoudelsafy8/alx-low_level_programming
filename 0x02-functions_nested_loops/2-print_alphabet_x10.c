#include "main.h"
/**
 * print_alphabet_x10 - alphabet in ten times
 * Return: On Seccess 0
 */
void print_alphabet_x10(void)
{
	int x;
	int i;

	for (i = 1; x <= 10; x++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
