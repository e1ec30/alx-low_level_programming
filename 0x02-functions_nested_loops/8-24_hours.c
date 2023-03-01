#include <stdio.h>

/**
 * jack_bauer - print every minute of jack bauer's day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hr;
	int min;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			printf("%02d:%02d\n", hr, min);
		}
	}
}
