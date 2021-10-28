#include "main.h"
/**
 * malloc_checked - Entry Point
 * @b: input amount
 * Return: pointer to new mem
 */
void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	
	if (str == NULL)
	{
		exit (98);
	}
	return (str);
}
