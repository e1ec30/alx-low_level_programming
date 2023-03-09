#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - puts but with recursion
 *
 * @s: string to puts
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
