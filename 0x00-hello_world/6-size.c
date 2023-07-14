#include <stdio.h>
/**
 * main - C program that prints the size of various types on the computer it is compiled and run on
 * Return: 0 (success)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", size(char));
	printf("Size of a int: %lu byte(s)\n", size(int));
	printf("Size of a long int: %lu byte(s)\n", size(long int));
	printf("Size of a long long int: %lu byte(s)\n", size(long long int));
	printf("Size of a long float: %lu byte(s)", size(float));
	return (0);
}
