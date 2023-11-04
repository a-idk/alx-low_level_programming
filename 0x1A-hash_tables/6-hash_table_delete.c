#include "hash_tables.h"


/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table to be deleted
 * @a_idk scripting
 *
 * Return: NADA!
 */

void hash_table_delete(hash_table_t *ht)
{
	/* declating and initializing variables */
	unsigned long int idx = 0;
	hash_node_t *tmp;
	hash_node_t *tmp2;

	/* checking for NULL value */
	if (ht == NULL)
		return;
	for (idx = 0; (idx < ht->size); idx += 1)
	{
		tmp = ht->array[idx];
		while (tmp)
			tmp2 = tmp->next, free(tmp->key), free(tmp->value), free(tmp), tmp = tmp2;
	}
	/* freeing the memory */
	free(ht->array), free(ht);
}
