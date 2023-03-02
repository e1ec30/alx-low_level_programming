#include <stdio.h>

/**
 * rot13 - rot13 encode a string
 *
 * @s: string to encode
 * Return: s, encoded
 */

char *rot13(char *s)
{
	char keys[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char values[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *k;
	char *c;

	for (c = s; *c; c++)
	{
		for (k = keys; *k; k++)
		{
			if (*c == *k)
			{
				*c = values[k - keys];
			}
		}
	}
	return (s);
}
