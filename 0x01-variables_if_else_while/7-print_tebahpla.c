#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int a = 0;

	for (a = 0x61 + 25; a >= 0x61; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
