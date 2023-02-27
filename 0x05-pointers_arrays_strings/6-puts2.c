#include <stdio.h>
#include <string.h>

/**
 * puts2 - skip print
 *
 * @str: string to skip print
 * Return: 0
 */

void puts2(char *str)
{
	int length;
	int i;

	length = strlen(str);
	for (i = 0; i < length; i++)
	{
		if ((i % 2 == 0) && str[i] != '\0')
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
