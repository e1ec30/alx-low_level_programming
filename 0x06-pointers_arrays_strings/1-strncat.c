#include <string.h>

/**
 * _strncat - wrapper
 *
 * @dest: destination
 * @src: source
 * @n: length
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ret;

	ret = strncat(dest, src, n);
	return (ret);
}
