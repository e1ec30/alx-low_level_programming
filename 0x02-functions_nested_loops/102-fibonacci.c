#include <stdio.h>
#include <stdint.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	uint64_t a = 1;
	uint64_t b = 1;
	int c;

	for (c = 0; c <= 50; c++)
	{
		printf("%lu", b);
		uint64_t tmp = a;

		a = b;
		b += tmp;

		if (c != 50)
			printf("%s", ", ");
	}
	printf("\n");
	return (0);
}
