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
 * is_prime - inner function, check if any number from b to num - 1 divides num
 *
 * @num: number to check
 * @b: which number to start from
 * Return: 1 if prime 0 otherwise
 */

int is_prime(int num, int b)
{
	if (b >= num)
		return (1);
	else if (num % b == 0)
		return (0);
	else
		return (is_prime(num, b++));
}
