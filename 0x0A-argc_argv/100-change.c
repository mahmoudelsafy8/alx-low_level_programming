#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of
 * coins to make change for an amount of money.
 * @argc: int
 * @argv: str
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int x;
		int lc = 0;
		int mo = atoi(argv[1]);
		int c[] = {25, 10, 5, 2, 1};

		for (x = 0; x < 5; x++)
		{
			if (mo >= c[x])
			{
				lc += mo / c[x];
				mo = mo % c[x];
				if (mo % c[x] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", lc);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
