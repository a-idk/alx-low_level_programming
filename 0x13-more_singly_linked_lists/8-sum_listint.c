/* Title: 8-sum_listint.c */
/* include header file */
#include "lists.h"

/**
 * sum_listint - function that calculates the sum of all the data(n)
 * in a listint_t linked list
 * @head: points to first node in the linked list
 * @a_idk
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	/* declaring and initializing variable */
	listint_t *prev_node = head;
	int add = 0;

	while (prev_node)
		add = add + prev_node->n, prev_node = prev_node->next;
	return (add);
}
