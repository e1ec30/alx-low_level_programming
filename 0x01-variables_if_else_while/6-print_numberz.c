#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	for (int a = 0x30; a <= 0x30 + 9; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
