#include <stdio.h>
/**
 * main - output 1 to 100
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0; x <= 100; x++)
	{
		if ((x % 3) == 0 && (x % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", x);
		}
	}
	printf("Buzz");
	printf('\n');
	return (0);
}
