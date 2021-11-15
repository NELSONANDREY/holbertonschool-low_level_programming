
#include <stddef.h>
#include "lists.h"

/**
 * add_node - Function that adds a new node at the beginning of a list
 * @head: Head of a list
 * @str: String to copy in new node
 * Description: Function that adds a new node at the beginning of a list_t list
 * Return: The number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->str = malloc(sizeof(char *) * (strlen(str) + 1));
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
