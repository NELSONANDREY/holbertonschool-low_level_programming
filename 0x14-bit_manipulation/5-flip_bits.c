#include "main.h"
/**
 * flip_bits - count bites comparate
 * @n: integer
 * @m: integer
 * Return: count bites
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int cmp;
	unsigned int rest = 0;

	cmp = n ^ m;

	for (; cmp != 0; cmp = (cmp >> 1))
		rest = rest + (cmp & 1);
	return (rest);
}
