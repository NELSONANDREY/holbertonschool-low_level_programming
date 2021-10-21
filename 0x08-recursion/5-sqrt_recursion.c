#include "main.h"
/**
 * _sqrt_recursion - no loop, 1. 
 * aux - checks for perfect square
 * @n: input
 * Return: Always 0 (Success)
 */
int aux(int n, int i)
{
	if (i * i == n)
	return (i);
	else if (i < n)
	aux(n, i + 1);
	else
	return (-1);
}
int _sqrt_recursion(int n)
{
	int i;
	i = 0;
	return aux(n, i);
}
