#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: key for the subsequent index
 * @size: array size
 * @a_idk scripting
 *
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* declaring variable */
	unsigned long int idx;

	idx = hash_djb2(key) % size;
	return (idx);
}
