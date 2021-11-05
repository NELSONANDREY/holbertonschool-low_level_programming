#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Entry for point.
 * @n: variadic inputs.
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(vlist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(vlist, const unsigned int);
	}

	va_end(vlist);

	return (sum);
}
