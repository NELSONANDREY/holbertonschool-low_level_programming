#include "lists.h"
/**
 * print_listint - Entry Point
 * @h: head
 * Return: 0
 */

size_t listint_len(const listint_t *h)
{
	int cont = 0;

	if (h == NULL)
	return (0);

	while (h != NULL)
	{
		h = h->next;
		cont++;
	}
	return (cont);
}
