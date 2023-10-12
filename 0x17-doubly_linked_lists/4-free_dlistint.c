/* Title: 4-free_dlistint.c */

#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: head ptr
 * @a_idk coding
 *
 * Return: NADA!
 */

void free_dlistint(dlistint_t *head)
{
	/* declaring variable */
	dlistint_t *cur_node;

	while (head != NULL)
		cur_node = head, head = head->next, free(cur_node);
}
