#include <stdio.h>
/**
 * main - Enter point
 * Return: Always 0
 */
int main(void)
{
	int x = 97;
	int i = 65;

	while (x <= 122)
	{
		putchar(x);
		x++;
	}
	while (i <= 90)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
