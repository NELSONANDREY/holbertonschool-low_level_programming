#include "main.h"

/**
 * leet - Entry point
 * ONE if, TWO loops only...
 * @n: input
 * Return: Always 0 (Success)
 */
char *leet(char *n)
{
	char lts[] = "aAeEoOtTlL";
	char nro[] = "4433007711";
	int i, j;

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == lts[j])
				n[i] = nro[j];
		}
	}
	return (n);
}
