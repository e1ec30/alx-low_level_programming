#include <stdio.h>

/**
 * print_times_table - print times table
 *
 * @n: n
 * Return: void
 */

void print_times_table(int n)
{
	int i;
	int j;
	int p;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			p = i * j;
			if (j == 0)
				printf("%d", p);
			else
				printf("%4d", p);
			if (j != n)
				putchar(',');
		}
		putchar('\n');
	}
}
