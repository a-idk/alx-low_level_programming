/* Title: 102-free_listint_safe.c */
/* include header file */
#include "lists.h"

/**
 * free_listint_safe - function that frees a linked list
 * @h: points to 1st node in the linked list
 * @a_idk
 *
 * Return: the size of the list freed
 */

size_t free_listint_safe(listint_t **h)
{
	/* declaration and initialization of variables used */
	size_t length = 0;
	int variance;
	listint_t *prev_node;

	/* checking for NULL */
	if (!h || !*h)
	{
		return (0);
	}

	while (*h)
	{
		variance = *h - (*h)->next;
		if (variance > 0)
		{
			prev_node = (*h)->next, free(*h), *h = prev_node;
			length += 1;
		}
		else
		{
			free(*h), *h = NULL, length += 1;
			break;
		}
	}
	*h = NULL;
	return (length);
}
