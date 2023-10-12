/* Title: 8-delete_dnodeint.c */

#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the
 * node at index index of a dlistint_t linked list
 * @head: head ptr to ptr
 * @index: index of interest
 * @a_idk coding
 *
 * Return: int 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	/* declaring and initializing variables */
	unsigned int x = 0;
	dlistint_t *cur_node;

	/* chekcing for NULL */
	if (head == NULL || *head == NULL)
		return (-1);
	cur_node = *head;
	if (index == 0)
	{
		*head = cur_node->next;
		if (cur_node->next != NULL)
			cur_node->next->prev = NULL;
		free(cur_node);
		return(1);
	}
	while (cur_node)
	{
		if (x == index)
		{
			if (cur_node->next != NULL)
				cur_node->next->prev = cur_node->prev;
			if (cur_node->prev != NULL)
				cur_node->prev->next = cur_node->next;
			free(cur_node);
			return (1);
		}
		cur_node = cur_node->next, x = x + 1;
	}
	return (-1);
}
