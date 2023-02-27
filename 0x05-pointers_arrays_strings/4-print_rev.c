#include <stdio.h>
#include <string.h>

/**
 * print_rev - reverse a string
 *
 * @s: pointer to string
 * Return: nothing
 */

void print_rev(char *s)
{
	int length;
	char *i;

	length = strlen(s);
	for (i = s + length - 1; i >= s; i--)
	{
		putchar(*i);
	}
	putchar('\n');
}

