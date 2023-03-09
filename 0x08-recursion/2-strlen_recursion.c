#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - strlen with recursion
 *
 * @s: string to get length of
 * Return: void
 */

int _strlen_recursion(char *s)
{
	int x;

	x = 1;
	if (*s == 0)
	{
		return (0);
	}
	x += _strlen_recursion(s + 1);
	return (x);
}

