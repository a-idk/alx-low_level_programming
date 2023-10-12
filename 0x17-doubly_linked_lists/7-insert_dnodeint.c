/* Title: 7-insert_dnodeint.c */

#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a
 * new node at a given position
 * @h: head ptr to ptr
 * @idx: index of interest
 * @n: data to store
 * @a_idk coding
 *
 * Return: new node addres
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	/* declaring and initializing variables */
	unsigned int x = 0;
	dlistint_t *cur_node, *add_node;

	/* checking for NULL value */
	if (h == NULL)
		return (NULL);
	/* allocating dynamic memory */
	add_node = malloc(sizeof(dlistint_t));
	/* check for NULL value in malloc */
	if (add_node == NULL)
		return NULL;
	add_node->n = n;

	if (idx == 0)
	{
		add_node->next = *h, add_node->prev = NULL;
		if (*h)
			(*h)->prev = add_node;
		*h = add_node;
		return (add_node);
	}
	cur_node = *h;
	while (cur_node)
	{
		if (x == idx - 1)
		{
			add_node->next = cur_node->next, add_node->prev = cur_node;
			if (cur_node->next)
				cur_node->next->prev = add_node;
			cur_node->next = add_node;
			return (add_node);
		}
		cur_node = cur_node->next, x = x + 1;
	}
	free(add_node);
	return (NULL);
}
