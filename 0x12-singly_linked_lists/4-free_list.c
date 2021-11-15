
#include <stddef.h>
#include "lists.h"

/**
 * free_list - Function that frees a list_t list
 * @head: Head of a list
 *
 * Return: The address of the new element, or NULL if it failed
 */
void free_list(list_t *head)
{
	list_t *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux->str);
		free(aux);
	}
}
