#include <ctype.h>

/**
 * _isalpha - Yup
 *
 * @c: char to check
 * Return: isalpha
 */

int _isalpha(int c)
{
	int ret;

	ret = isalpha(c);
	if (ret != 0)
		ret = 1;
	return (ret);
}
