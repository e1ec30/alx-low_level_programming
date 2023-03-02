#include <stdio.h>

/**
 * reverse_array - reverse an array
 *
 * @a: array to reverse
 * @n: length of array
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int tmp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}


}
