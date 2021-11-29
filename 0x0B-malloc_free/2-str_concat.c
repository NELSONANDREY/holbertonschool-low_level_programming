#include"main.h"
#include<stdlib.h>
/**
 * str_concat - concatenate string whit reserve malloc
 * @s1: first string
 * @s2: second string
 * Return: () pointer created
*/
char *str_concat(char *s1, char *s2)
{
	char *ma;
	int s1i = 0, s2j = 0, i, j;

	ma = malloc(s1i + s2j);
	if (ma == 0)
	return (NULL);
	if (s1 == NULL && s2 == NULL)
	return (ma);
	if (s1 == NULL)
	{
		while (s2[s2j] != '\0')
		s2j++;
		ma = malloc(s2j + 1);
		for (i = 0; i < s2j; i++)
		ma[i] = s2[i];
	}
	else if (s2 == NULL)
	{
		while (s1[s1i] != '\0')
		s1i++;
		ma = malloc(s1i + 1);
		for (i = 0; i < s1i; i++)
		ma[i] = s1[i];
	}
	else
	{
		while (s2[s2j] != '\0')
		s2j++;
		while (s1[s1i] != '\0')
		s1i++;
		ma = malloc(s1i + s2j + 1);
		for (i = 0; i < s1i; i++)
		ma[i] = s1[i];
		for (j = 0; j < s2j; j++)
		{
			ma[i] = s2[j];
			i++;
		}
	}
	return (ma);
}
