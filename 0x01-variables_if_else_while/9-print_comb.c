#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
		putchar(',');
		if (x != 9)
			putchar(' ');
	}
	return (0);
}
