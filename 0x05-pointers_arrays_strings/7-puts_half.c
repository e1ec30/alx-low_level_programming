#include <stdio.h>
#include <string.h>

/**
 * puts_half - print the last half of a string
 *
 * @str: pointer to string to print
 * Return: nothing
 */

void puts_half(char *str)
{
	int length;
	int n;

	length = strlen(str);
	if (length % 2 == 0)
	{
		n = length / 2;
	}
	else
	{
		n = (length - 1) / 2;
	}

	for (; n <= length - 1; n++)
	{
		putchar(str[n]);
	}
}
