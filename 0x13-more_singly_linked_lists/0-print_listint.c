/* Title: 0-print_listint.c */
/* include header file */
#include "lists.h"

#include "lists.h"
/**
 * print_listint - function that prints all the elements
 * of a linked list
 * @h: linked list of custom typedef listint_t
 * @a_idk
 *
 * Return: number of elements (nodes)
 */

size_t print_listint(const listint_t *h)
{
	/* declaring and initializing variable */
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes += 1; /* counting the number of nodes present */
		h = h->next;
	} return (nodes);
}
