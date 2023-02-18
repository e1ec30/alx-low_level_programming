#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0x61; a <= 0x61 + 25; a++)
	{
		putchar(a);
	}
	for (a = 0x41; a <= 0x41 + 25; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
