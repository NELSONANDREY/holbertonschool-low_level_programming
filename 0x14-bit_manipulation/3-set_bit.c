#include "main.h"
/**
 * set_bit - Entry Point
 * @n: input
 * @index: index
 * Return: 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64 || !n) /**/
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
