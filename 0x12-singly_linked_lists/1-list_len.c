#include <stddef.h>
#include "lists.h"

/**
 * list_len - Function that returns the number of elements in a linked list
 * @h: Head of a list
 * Description: Function that returns the number of elements in a linked list
 * Return: The number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
