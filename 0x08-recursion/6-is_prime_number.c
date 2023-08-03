#include "main.h"
int actual_prime(int n, int i);

/**
 * int is_prime_number -  input integer is a prime number
 * @n: input
 * Return: 1 if the input integer, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - check if int is prime
 * @n: int evaluate
 * @i: iterator
 * Return: 1 if the input integer, otherwise return 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
