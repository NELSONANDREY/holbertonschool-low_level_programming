#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using the \ character.
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
	int lon, spac;


	if (n > 0)
	{
		for (lon = 0; lon < n; lon++)
		{
			for (spac = 0; spac < lon; spac++)
				_putchar(' ');
			_putchar('\\');

			if (lon == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
