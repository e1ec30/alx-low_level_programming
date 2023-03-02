#include <string.h>

/**
 * _strcat - wrapper around strcat
 *
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	char *ret;

	ret = strcat(dest, src);
	return (ret);
}
