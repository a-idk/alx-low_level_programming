/* Title: 5-free_listint2.c */
/* include header file */
#include "lists.h"

/**
 * free_listint2 - function that frees a linked list (listint_t)
 * @head: points to list to be freed
 * @a_idk
 *
 * Return: Nada!
 */

void free_listint2(listint_t **head)
{
	/* declaring variable */
	listint_t *prev_node;

	/* check for NULL */
	if (head == NULL)
	{
		return;
	}
	while (*head)
		prev_node = (*head)->next, free(*head), *head = prev_node;
	*head = NULL;
}
