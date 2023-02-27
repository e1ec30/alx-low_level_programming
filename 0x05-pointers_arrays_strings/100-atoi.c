#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _atoi - convert string to number
 *
 * @s: string to convert
 * Return: integer
 */

int _atoi(char *s)
{
	int x;
	char *y;
	int l;

	l = strlen(s);
	for (y = s; y < s + l - 1; y++)
	{
		if ((*y == '-') || (*y == '+') || (*y >= '0' && *y <= '9'))
			break;
	}
	x = atoi(y);
	return (x);
}
