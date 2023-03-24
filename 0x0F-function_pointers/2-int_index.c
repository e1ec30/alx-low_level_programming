#include "function_pointers.h"

/**
 * int_index - Search array for integer
 *
 * @cmp: compare function
 * @array: array
 * @size: size
 * Return: index of int if found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
