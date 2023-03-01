#include <stdio.h>

/**
 * times_table - print times table
 *
 * Return: void
 */

void times_table(void)
{
	int i;
	int j;
	int p;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			p = i * j;
			if (j == 0)
				printf("%d", p);
			else
				printf("%3d", p);
			if (j != 9)
				putchar(',');
		}
		putchar('\n');
	}
}
