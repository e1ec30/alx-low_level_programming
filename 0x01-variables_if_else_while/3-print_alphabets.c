#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	for (int a = 0x61; a <= 0x61 + 25; a++)
	{
		putchar(a);
	}
	for (int a = 0x41; a <= 0x41 + 25; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
