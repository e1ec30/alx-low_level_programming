#include <stdio.h>

/**
 * print_array - print n elements of an array
 *
 * @a: pointer to first element
 * @n: number of elements to print
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	putchar('\n');
}
