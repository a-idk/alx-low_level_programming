#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value for the corresponding key
 * @a_idk scripting
 *
 * Return: 1 (Success!), else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/* declating variables */
	unsigned long int idx;
	hash_node_t *tmp;
	hash_node_t *hash_nd;

	/* check for NULL value */
	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value), tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	/* allocating dynamic memory */
	hash_nd = malloc(sizeof(hash_node_t));
	/* checking for NULL value */
	if (hash_nd == NULL)
		return (0);

	hash_nd->key = strdup(key), hash_nd->value = strdup(value);
	hash_nd->next = ht->array[idx], ht->array[idx] = hash_nd;
	return (1);
}
