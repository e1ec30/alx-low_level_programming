#include <string.h>

/**
 * _strncpy - duh
 *
 * @dest: destination
 * @src: source
 * @n: length
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ret;

	ret = strncpy(dest, src, n);
	return (ret);
}
