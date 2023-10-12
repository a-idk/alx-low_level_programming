/* Title: 3-add_dnodeint_end.c */

/* include header files */
#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end
 * of a dlistint_t list
 * @head: head ptr to ptr
 * @n: data to be added
 * @a_idk coding
 *
 * Return: address of added element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/* declaring variable */
	dlistint_t *add_node, *cur_node;

	/* if value is NULL */
	if (head == NULL)
		return (NULL);
	/* setting dynamic memory */
	add_node = malloc(sizeof(dlistint_t));
	/* checking for NULL value */
	if (add_node == NULL)
		return (NULL);
	add_node->n = n, add_node->next = NULL;
	/* setting the prev node */
	if (*head == NULL)
		add_node->prev = NULL, *head = add_node;
	else
	{
		cur_node = *head;
		while (cur_node->next != NULL)
			cur_node = cur_node->next;
		cur_node->next = add_node, add_node->prev = cur_node;
	}
	return (add_node);
}
