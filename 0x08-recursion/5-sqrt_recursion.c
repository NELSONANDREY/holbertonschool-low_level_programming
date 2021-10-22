#include "main.h"
/**
 * aux - checks for perfect square
 * @n: input
 * @i: input
 * Return: Always 0 (Success)
 */
int aux(int n, int i)
{
	if (i * i == n)
	return (i);
	else if (i < n)
	return (aux(n, i + 1));
	else
	return (-1);
}
/**
 * _sqrt_recursion - no loop, 1.
 * @n: input
 * Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	return (aux(n, i));
}
