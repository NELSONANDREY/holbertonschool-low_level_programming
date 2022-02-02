#include "hash_tables.h"
/**
 *hash_table_print:-print a hash table
 *@ht:-is the hash table you want to add or update the key/value to
 * Return: value or Null
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temporal = NULL;
	unsigned long int index = 0;
	char *coma = "";

	if (ht)
	{
		printf("{");
		while (index < ht->size)
		{
			temporal = ht->array[index];
			while (temporal)
			{
				printf("%s", coma);
				coma = ", ";
				if (temporal->key)
				{
					printf("'%s': '%s'", temporal->key, temporal->value);
				}
				temporal = temporal->next;
			}
			index++;
		}
		printf("}\n");
	}
}
