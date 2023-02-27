#include <stdio.h>
#include <string.h>

/**
 * _strcpy - wrapper around strcpy
 *
 * @dest: destination string
 * @src: source string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *ret;

	ret = strcpy(dest, src);
	return (ret);
}

