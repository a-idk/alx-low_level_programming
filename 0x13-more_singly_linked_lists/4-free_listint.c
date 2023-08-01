/* Title: 4-free_listint.c */
/* include header file */
#include "lists.h"

/**
 * free_listint - function that frees a (listint_t) linked list
 * @head: list to be free
 * @a_idk
 *
 * Return: Nada!
 */

void free_listint(listint_t *head)
{
	/* declaration of variable */
	listint_t *prev_node;

	while (head)
		prev_node = head->next, free(head), head = prev_node;
}
