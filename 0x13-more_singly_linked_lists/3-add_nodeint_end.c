/* Title: 3-add_nodeint_end.c */
/* include header file */
#include "lists.h"

/**
 * add_nodeint_end - function that adds a node at the
 * end of a linked list (listint_t)
 * @head: points to the 1st element in the linked list
 * @n: the data to be added
 * @a_idk
 *
 * Return: points to new_node else NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* declaring variable */
	listint_t *prev_node = *head;
	listint_t *new_node;

	/* assigning dynamic variable */
	new_node = malloc(sizeof(listint_t));
	/* check for NULL value */
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	/* also NULL check */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (prev_node->next)
	{
		prev_node = prev_node->next;
	}

	prev_node->next = new_node;
	return (new_node);
}
