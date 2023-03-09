#include "main.h"

/**
 * _sqrt_recursion - calcuate the square root
 *
 * @n: number
 * Return: sqrt of n
 */

int _sqrt_recursion(int n)
{
	return (guess(n, n / 2));
}

/**
 * guess - guess the square root
 *
 * @n: number
 * @g: current guess
 * Return: square root
 */

int guess(int n, int g)
{
	if ((g * g) == n)
		return (g);
	if ((g * g) < n)
		return ((guess(n, g + 1)));
	else
		return (-1);
}
