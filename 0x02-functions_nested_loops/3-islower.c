#include <ctype.h>

/**
 * _islower - I know, right
 *
 * @c: char to check
 * Return: true or false
 */

int _islower(int c)
{
	int ret;

	ret = islower(c);
	return (ret);
}
