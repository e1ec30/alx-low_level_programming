#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * rev_string - reverse a string in place
 *
 * @s: string to reverse
 * Return: Nothing
 */

void rev_string(char *s)
{
	char *copy;
	int i;
	int j;
	int length;

	length = strlen(s);
	copy = malloc(length++);
	strncpy(copy, s, length);
	for (i = 0, j = length - 2; i <= length - 1; i++, j--)
	{
		s[i] = copy[j];
	}

}

