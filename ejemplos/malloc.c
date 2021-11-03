#include <stdio.h>
#include <stdlib.h>

/**
 * m - stores 3 int in a new allocated space in memory and prints the sum
 * @n0: integer to store and print
 * @n1: integer to store and print
 * @n2: integer to store and print
 *
 * Return: nothing
 */
void m(int n0, int n1, int n2)
{
	int *put;
	int sum;

	put = malloc(sizeof(*put) * 3);
	put[0] = n0;
	put[1] = n1;
	put[2] = n2;

	sum = put[0] + put[1] + put[2];
	printf("%d + %d + %d = %d\n", put[0], put[1], put[2], sum);
	free(put);
}

/**
 * main - introduction to malloc and free
 *
 * Return: 0.
 */
int main(void)
{
    m(98, 402, -1024);
    return (0);
}
