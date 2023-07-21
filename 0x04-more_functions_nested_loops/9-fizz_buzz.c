#include <stdio.h>
/**
 * main - output 1 to 100
 * Fizz for multiples of three.
 * Buzz for the multiples of five
 * FizzBuzz For numbers which are multiples of both three and five
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if ((x % 3)  == 0 && (x % 5) == 0)
			printf("FizzBuzz");

		else if ((x % 3) == 0)
			printf("Fizz");

		else if ((x % 5) == 0)
			printf("Buzz");

		else
			printf("%d ", x);

		if (x == 100)
			continue;
		printf(" ");
	}
	printf("\n");

	return (0);
}
