#include "hash_tables.h"


/**
 * hash_table_print - function that prints a hash table.
 * @ht: hash table
 * @a_idk scripting
 *
 * Return: NADA!
 */

void hash_table_print(const hash_table_t *ht)
{
	/* declaring and initializing variables */
	int f = 0;  /* flag */
	unsigned long int idx = 0;
	hash_node_t *tmp;

	if (ht)
	{
		printf("{");
		for (idx = 0; idx < ht->size; idx += 1)
		{
			tmp = ht->array[idx];
			while (tmp)
			{
				if (f == 0)
					f = 1;
				else
					printf(", ");
				printf("'%s': '%s'", tmp->key, tmp->value), tmp = tmp->next;
			}
		}
		printf("}\n");
	}
}
