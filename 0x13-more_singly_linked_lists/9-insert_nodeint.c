/* Title: 9-insert_nodeint.c */
/* include header file */
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a given
 * position in a linked list,
 * @head: points to 1st node in the list
 * @idx: index of the newnode
 * @n: data of the new node
 * @a_idk
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/* declaring variables */
	listint_t *prev_node = *head, *new_node;
	unsigned int index;

	/* assigning dynamic variable */
	new_node = malloc(sizeof(listint_t));

	/* checking for NULL */
	if (!new_node || !head)
	{
		return (NULL);
	}
	new_node->n = n, new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head, *head = new_node;
		return (new_node);
	}
	for (index = 0; (prev_node && index < idx); index++)
	{
		if (index == idx - 1)
		{
			new_node->next = prev_node->next, prev_node->next = new_node;
			return (new_node);
		}
		else
		{
			prev_node = prev_node->next;
		}
	}
	return (NULL);
}
