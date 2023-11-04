#include "hash_tables.h"


/* Prototypes */
shash_table_t *shash_table_create(unsigned long int size);
int iskey_s(shash_node_t *ht, const char *key);
int Change_val_s(shash_node_t **ht, const char *key, const char *value);
shash_node_t *node_ad_s(shash_node_t **hd, const char *key, const char *value);
void insert_node(shash_node_t *node, shash_table_t *ht);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);
void free_s(shash_node_t *hd);


/**
 * shash_table_create - function that creates a hash table
 * @size: Array size
 * @a_idk scripting
 *
 * Return: s_hasht (shash_table_t struct)
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	/* declaring variable */
	shash_table_t *s_hasht;

	/* checking for NULL value */
	if (size == 0)
		return (NULL);

	s_hasht = calloc(1, sizeof(shash_table_t));
	if (!s_hasht)
		return (NULL);
	s_hasht->size = size;
	/* allocating dynamic memory */
	s_hasht->array = calloc((size_t)s_hasht->size, sizeof(shash_node_t *));
	/* checking for NULL value in memory */
	if (s_hasht->array == NULL)
	{
		free(s_hasht);
		return (NULL);
	}
	return (s_hasht);
}


/**
 * iskey_s - function that confirms if a key exists in a hash table
 * @ht: hash table ptr
 * @key: key
 * @a_idk scripting
 *
 * Return: 1 (Success!), else 0
 */

int iskey_s(shash_node_t *ht, const char *key)
{
	while (ht)
	{
		if (!strcmp(ht->key, key))
			return (1);
		ht = ht->next;
	}
	return (0);
}


/**
 * Change_val_s - function that replaces the value at
 * pre-existing key
 * @ht: hash table
 * @key: new key
 * @value: value
 * @a_idk scripting
 *
 * Return: 1 (Success!), else 0
 */

int Change_val_s(shash_node_t **ht, const char *key, const char *value)
{
	/* declaring variable */
	shash_node_t *tmp;

	tmp = *ht;
	while (tmp && strcmp(tmp->key, key))
	{
		tmp = tmp->next;
	}
	free(tmp->value), tmp->value = strdup(value);
	if (!tmp->value)
		return (0);
	return (1);
}


/**
 * node_ad_s - function that adds new node at the beginning
 * of a linked list
 * @hd: double pointer to the first node of list
 * @key: new key
 * @value: value
 * @a_idk Scripting
 *
 * Return: address of new element, else NULL
 */

shash_node_t *node_ad_s(shash_node_t **hd, const char *key, const char *value)
{
	/* declaring variable */
	shash_node_t *new_hash_node;

	/* allocating dynamic memory and initializing to zero */
	new_hash_node = calloc(1, sizeof(shash_node_t));
	/* checking for NULL value in memory */
	if (!new_hash_node)
		return (NULL);
	new_hash_node->key = strdup(key);
	if (!new_hash_node->key)
	{
		free(new_hash_node);
		return (NULL);
	}
	new_hash_node->value = strdup(value);
	if (!new_hash_node->value)
	{
		free(new_hash_node), free(new_hash_node->key);
		return (NULL);
	}
	if (*hd == NULL)
		(*hd) = new_hash_node;
	else
		new_hash_node->next = (*hd), (*hd) = new_hash_node;
	return (*hd);
}


/**
 * insert_node - function that inserts node in a sorted doubly linked list
 * @node: hash node
 * @ht: hash table ptr
 * @a_idk scripting
 *
 * Return: NADA!
 */

void insert_node(shash_node_t *node, shash_table_t *ht)
{
	/* declaring variable */
	shash_node_t *hd;

	hd = ht->shead;
	if (!hd || strcmp(node->key, hd->key) < 0)
	{
		ht->shead = node;
		if (!hd)
			ht->stail = node;
		else
			node->snext = hd, hd->sprev = node;
		return;
	}
	while ((hd->snext) && (strcmp(node->key, hd->snext->key) >= 0))
		hd = hd->snext;
	node->sprev = hd;
	if (!hd->snext)
		ht->stail = node;
	else
		hd->snext->sprev = node;
	node->snext = hd->snext, hd->snext = node;
}


/**
 * shash_table_set - function that adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: Value
 * @a_idk scripting
 *
 * Return: 1 (Success!), else 0
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	/* declaring variables */
	unsigned long int idx;
	shash_node_t *new_hash_node;

	if (!strcmp(key, "") || !ht)
		return (0);
	if (!key || !value)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	if (iskey_s(ht->array[idx], key))
		return (Change_val_s(&ht->array[idx], key, value));
	new_hash_node = node_ad_s(&ht->array[idx], key, value);
	if (!new_hash_node)
		return (0);
	insert_node(new_hash_node, ht);
	return (1);
}


/**
 * shash_table_get - function that retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 * @a_idk scripting
 *
 * Return: value, else NULL
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	/* declaring and initializing variables*/
	unsigned long int idx;
	shash_node_t *hash_node = NULL;

	/* checking for NULL value */
	if (!ht || !key || !strcmp(key, ""))
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	hash_node = (ht->array)[idx];
	while (hash_node)
	{
		if (!strcmp(hash_node->key, key))
			return (hash_node->value);
		hash_node = hash_node->next;
	}
	return (NULL);
}

/**
 * shash_table_print - function that prints a hash table
 * @ht: hash table
 * @a_idk scripting
 *
 * Return: NADA!
 */

void shash_table_print(const shash_table_t *ht)
{
	/* declaring and initializing variable */
	shash_node_t *hd = NULL;

	if (!ht)
		return;
	hd = ht->shead, printf("{");  /* printing the open curly "{" */
	while (hd)
	{
		printf("'%s': '%s'", hd->key, hd->value);
		if (hd->snext)
			printf(", ");
		hd = hd->snext;
	}
	printf("}\n");  /* printing the close curly "}" */
}


/**
 * shash_table_print_rev - function that prints a hash table
 * in reverse
 * @ht: hash table
 * @a_idk scripting
 *
 * Return: NADA!
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	/* declaring and initializing variable */
	shash_node_t *tail_node = NULL;

	if (!ht)
		return;
	tail_node = ht->stail, printf("{");  /* printing the open curly "{" */
	while (tail_node)
	{
		printf("'%s': '%s'", tail_node->key, tail_node->value);
		if (tail_node->sprev)
			printf(", ");
		tail_node = tail_node->sprev;
	}
	printf("}\n");  /* printing the close curly "}" */
}

/**
 * shash_table_delete - function that deletes a hash table
 * @ht: hash table
 * @a_idk scripting
 *
 * Return: NADA!
 */

void shash_table_delete(shash_table_t *ht)
{
	if (!ht)
		return;
	free_s(ht->shead), free(ht->array), free(ht);
}


/**
 * free_s - function that frees linked list
 * @hd: first node (head) of the shash_node_t list
 * @a_idk scripting
 *
 * Return: NADA!
 */

void free_s(shash_node_t *hd)
{
	/* declaring variable */
	shash_node_t *tmp;

	while (hd)
		tmp = hd->snext, free(hd->key), free(hd->value), free(hd), hd = tmp;
}
