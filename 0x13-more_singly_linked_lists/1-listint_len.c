/* Title: 0-print_listint.c */
/* include header file */
#include "lists.h"

#include "lists.h"
/**
 * listint_len - function that returns the number of elements
 * (lintin_t) a linked list
 * @h: linked list of custom typedef listint_t
 * @a_idk
 *
 * Return: number of elements (nodes)
 */

size_t listint_len(const listint_t *h)
{
	/* initializing the node value */
	size_t nodes = 0;

	while (h)
	{
		nodes += 1;
		h = h->next;
	} return (nodes);
}
