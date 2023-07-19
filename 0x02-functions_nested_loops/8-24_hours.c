#include "main.h"
/**
 * jack_bauer - prints every minute of the day.
 * Return: no return
 */
void jack_bauer(void)
{
	int x;
	int y;
	int i;
	int z;

	for (x = 0; x <= 2; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			for (i = 0; i <= 5; i++)
			{
				for (z = 0; z <= 9; z++)
				{
					if (x >= 2 && y >= 4)
						break;
					_putchar(x + 48);
					_putchar(y + 48);
					_putchar(58);
					_putchar(i + 48);
					_putchar(z + 48);
					_putchar('\n');
				}
			}
		}
	}
}
