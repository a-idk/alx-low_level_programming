/* Title: 2-add_dnodeint.c */
/* include header files */
#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning
 * of a dlistint_t list
 * @head: head ptr to ptr
 * @n: data to be added
 * @a_idk coding
 *
 * Return: address of added element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* declaring variable */
	dlistint_t *add_node;

	/* if value is NULL */
	if (head == NULL)
		return (NULL);
	/* setting dynamic memory */
	add_node = malloc(sizeof(dlistint_t));
	/* checking for NULL value */
	if (add_node == NULL)
		return (NULL);
	add_node->n = n, add_node->prev = NULL, add_node->next = *head;
	/* if address is NULL */
	if (*head != NULL)
		(*head)->prev = add_node;
	*head = add_node;
	return (add_node);
}
