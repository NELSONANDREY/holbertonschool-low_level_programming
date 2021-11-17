#include "lists.h"
/**
 * add_nodeint_end - Entry Point
 * @head: head
 * @n: value
 * Return: 0
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *aux, *tmp;

	tmp = (listint_t *)malloc(sizeof(listint_t));
	if (tmp ==  NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	aux = *head;
	while (aux && aux->next)
		aux = aux->next;
	if (aux == NULL)
	{
		*head = tmp;
		return (tmp);
	}
	aux->next = tmp;
	return (tmp);
}
