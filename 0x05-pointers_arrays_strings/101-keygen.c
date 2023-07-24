#include "main.h"
#include <stdio.h>
#include <time.h>

/**
 * main _ generates random valid passwords for the program 101-crackme.
 * Rreturn: 0.
 */
int main(void)
{
	int x;
	char y;

	srand(time(NULL));
	while (x <= 2645)
	{
		y = rand() % 128;
		x += y;
		putchar(y);
	}
	putchar(2772 - x);
	return (0);
}
