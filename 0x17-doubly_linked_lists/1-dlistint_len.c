/* title: 1-dlistint_len.c */

#include "lists.h"

/**
 * dlistint_len - function that returns the number
 * of elements in a linked dlistint_t list.
 * @h: head pointer
 * @a_idk coding
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	/* declare variable */
	int idx;

	for (idx = 0; (h != NULL); idx++)
		h = h->next;
	return (idx);
}
