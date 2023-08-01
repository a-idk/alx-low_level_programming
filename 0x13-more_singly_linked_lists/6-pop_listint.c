/* Title: 6-pop_listint.c */
/* include header file */
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * and returns the head node’s data (n)
 * @head: points to first element in linked list
 * @a_idk
 *
 * Return: node's data else 0 if empty
 */

int pop_listint(listint_t **head)
{
	/* declaring variable */
	int numb;
	listint_t *prev_node;

	if (!head || !*head)
	{
		return (0);
	}
	numb = (*head)->n, prev_node = (*head)->next, free(*head);
	*head = prev_node;

	return (numb);
}

