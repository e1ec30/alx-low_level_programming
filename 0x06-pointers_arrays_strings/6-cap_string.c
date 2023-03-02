#include <stdio.h>
#include <ctype.h>

/**
 * cap_string - Capitalize a string
 *
 * @s: string to capitalize
 * Return: pointer to s
 */

char *cap_string(char *s)
{
	char *c;

	for (c = s; *(c + 1); c++)
	{
		switch (*c)
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				*(c + 1) = (char)toupper(*(c + 1));
				break;
		}
	}
	return (s);
}

