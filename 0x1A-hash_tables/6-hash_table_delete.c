#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: pointer to hash table to be deleted.
 *
 * Return: No return.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (!ht->array[i])
		{
			while (ht->array[i])
			{
				current = ht->array[i];
				free(current->key);
				free(current->value);
				ht->array[i] = ht->array[i]->next;
				free(current);
			}
		}
	}
	free(ht->array);
	free(ht);
}
