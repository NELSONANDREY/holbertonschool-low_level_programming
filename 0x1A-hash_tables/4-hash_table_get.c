#include "hash_tables.h"
/**
 *hash_table_get:-get a hash table
 *@ht:-is the hash table you want to add or update the key/value to
 *@key:-is the key
 * Return: value or Null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t  *temporal = NULL;
	unsigned long int index = 0;

	if (*key == '\0' || key == NULL || ht == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	temporal = ht->array[index];
	while (temporal != NULL)
	{
		if (strcmp(temporal->key, key) == 0)
			return (temporal->value);
		temporal = temporal->next;
	}
	return (NULL);
}
