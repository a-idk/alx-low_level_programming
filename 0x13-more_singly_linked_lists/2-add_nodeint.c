/* Title: 0-print_listint.c */
/* include header file */
#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning
 * of a linked list (listint_t)
 * @head: points the 1st node in linked list
 * @n: what is put in the new node
 * @a_idk
 *
 * Return: pointer to new_node else NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* declaring variable */
	listint_t *new_node;

	/* Assigning dynamic memory */
	new_node = malloc(sizeof(listint_t));

	/* checking for null vslue */
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
