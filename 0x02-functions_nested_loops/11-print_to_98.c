#include <stdio.h>

/**
 * print_to_98 - print to 98
 *
 * @n: beginning
 * Return: void
 */

void print_to_98(int n)
{
	int x;

	if (n < 98)
	{
		for (x = n; x < 98; x++)
		{
			printf("%d, ", x);
		}
		printf("%d\n", 98);
	}
	else
	{
		if (n > 98)
		{
			for (x = n; x > 98; x--)
			{
				printf("%d, ", x);
			}
			printf("%d\n", 98);
		}
		else
		{
			puts("98");
		}
	}
}
