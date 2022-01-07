#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node
 * @h: doucble pointer
 * @idx: index
 * @n: value
 * Return: dlistint_t*
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *select_node = *h;
	dlistint_t *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		select_node = select_node->next;
		if (select_node == NULL)
			return (NULL);
	}
	if (select_node->next == NULL)
		return (add_dnodeint_end(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = select_node;
	new_node->next = select_node->next;
	select_node->next->prev = new_node;
	select_node->next = new_node;
	return (new_node);
}
