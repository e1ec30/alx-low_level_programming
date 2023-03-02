#include <stdio.h>
#include <ctype.h>

/**
 * leet - convert string to leet
 *
 * @s: pointer to string
 * Return: s in leet
 */

char *leet(char *s)
{
	char keys[] = "aeotl";
	char values[] = "43071";
	char *c;
	char *d;

	for (c = s; *c; c++)
	{
		for (d = keys; *d; d++)
		{
			if (*c == *d || (char)tolower(*c) == *d)
			{
				*c = values[(d - keys)];
				break;
			}
		}
	}
	return (s);
}



