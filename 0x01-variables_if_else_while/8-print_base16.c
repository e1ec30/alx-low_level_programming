#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	for (int a = '0'; a <= '9'; a++)
		putchar(a);
	for (int b = 'a'; b <= 'f'; b++)
		putchar(b);
	putchar('\n');
}
