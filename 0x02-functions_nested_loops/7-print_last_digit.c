#include <stdio.h>

/**
 * print_last_digit - print last digit
 *
 * @n: number to print
 * Return: last digit
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	printf("%d", last);
	return (last);
}
