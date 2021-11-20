#include "main.h"
/**
 * get_endianness - Get the endianness object
 * Return: int
 */
int get_endianness(void)
{
	int16_t i = 1;
	int8_t *p = (int8_t *) &i;

	return (p[0]);
}
