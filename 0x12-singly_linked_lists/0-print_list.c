#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - Function that prints a list
 * @h: Head of a list
 * Description: Function that prints all the elements of a list_t list
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
