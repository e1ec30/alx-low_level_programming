#include <stdio.h>

/**
 * print_sign - Print sign of number
 *
 * @n: number to check
 * Return: 1 for +ve, 0 for 0, -1 for -ve
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	if (n == 0)
	{
		putchar('+');
		return (0);
	}
	if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	return (0);
}
