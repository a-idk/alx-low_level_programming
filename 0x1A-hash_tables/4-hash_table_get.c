#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 * @a_idk scripting
 *
 * Return: Value (Success!), else Null
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	/* declaring variables */
	unsigned long int idx;
	hash_node_t *tmp;

	/* check for NULl Value */
	if (key == NULL || ht == NULL)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
