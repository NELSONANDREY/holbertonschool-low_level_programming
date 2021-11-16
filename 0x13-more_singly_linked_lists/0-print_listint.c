#include "lists.h"
/**
 * print_listint - Entry Point
 * @h: head
 * Return: 0
 */
size_t print_listint(const listint_t *h)
{
	int cont = 0;

	if (h == NULL)
	return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cont++;
	}
	return (cont);
}
