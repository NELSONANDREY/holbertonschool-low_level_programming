#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - myname
 * @argc: numers of arguments
 * @argv: array points of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);

	printf("%d\n", (i * j));
	return (0);
}
