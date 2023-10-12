/* Title: 5-get_dnodeint.c */

#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth
 * node of a dlistint_t linked list
 * @head: head ptr
 * @index: index to be retrieved
 * @a_idk coding
 *
 * Return: nth node ptr
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	/* initialized variable */
	unsigned int idx = 0;

	while (head != NULL)
	{
		if (idx == index)
			return (head);
		head = head->next, idx += 1;
	}
	return (NULL);
}
