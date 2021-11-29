#include"main.h"
#include<stdlib.h>
/**
 * _strdup - duplicate string whit reserve malloc
 * @str: string to duplicate
 * Return: () pointer created
*/
char *_strdup(char *str)
{
	char *ma;
	int i = 0, j;

	if (str == NULL)
	return (NULL);
	while (str[i] != '\0')
	i++;
	ma = malloc(sizeof(char) * i + 1);
	if (ma == 0)
	return (NULL);
	for (j = 0; j < i; j++)
	ma[j] = str[j];
	return (ma);
}
