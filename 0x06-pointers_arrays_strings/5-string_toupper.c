#include <ctype.h>
#include <string.h>

/**
 * string_toupper - convert string to uppercase
 *
 * @s: pointer to string
 * Return: pointer to converted string
 */

char *string_toupper(char *s)
{
	char *c;

	for (c = s; *c; c++)
	{
		*c = (char)toupper(*c);
	}
	return (s);
}
