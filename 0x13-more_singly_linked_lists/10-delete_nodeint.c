/* Title: 10-delete_nodeint.c */
/* include header file */
#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * of a linked list
 * @head: points to 1st element in the list
 * @index: location of node to be deleted
 * @a_idk
 *
 * Return: 1 (Success) else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/* declare variable and initialise */
	unsigned int idx1 = 0;
	listint_t *prev_node = *head, *current = NULL;

	/* checking for NULL value */
	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next, free(prev_node);
		return (1);
	}

	while (idx1 < index - 1)
	{
		if (!prev_node || !(prev_node->next))
		{
			return (-1);
		}
		prev_node = prev_node->next;
		idx1 += 1;
	}
	current = prev_node->next, prev_node->next = current->next, free(current);
	return (1);
}
