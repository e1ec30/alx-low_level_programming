#include "main.h"

/**
 * is_prime_number - check if a number is prime
 *
 * @n: number to check
 * Return: 1 if prime 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}

/**
 * is_prime - inner function
 *
 * @x: number to check
 * @y: which number to start from
 * Return: 1 if prime 0 otherwise
 */

int is_prime(int x, int y)
{
	if (y == x - 1)
		return (0);
	if ((y % x) == 0)
		return (0);
	return (is_prime(x, y++));
}
