#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Iterate over array contents
 *
 * @array: pointer to array
 * @size: size of array
 * @action: action to perform
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}
}
