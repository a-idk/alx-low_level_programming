#include "hash_tables.h"

/**
  * hash_table_create - function that creates a hash table
  * @size: array size
  * @a_idk scripting
  *
  * Return: new hash table ptr
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	/* declating variables */
	unsigned long int idx;
	hash_table_t *new_hasht;

	/* allocating dynamic memory for hash table */
	new_hasht = malloc(sizeof(hash_table_t));
	/* check for NULL value */
	if (new_hasht == NULL)
	{
		return (NULL);
	}

	/* allocating dynamic memory to the array also */
	new_hasht->size, new_hasht->array = malloc(sizeof(void *) * size);
	/* chekcing for NULL value */
	if (new_hasht->array == NULL)
	{
		return (NULL);
	}
/*	new_hasht->size = size; */
	/* creating the new hash table */
	for (idx = 0; idx < size; idx += 1)
	{
		new_hasht->array[idx] = NULL;
	}
	return (new_hasht);
}
