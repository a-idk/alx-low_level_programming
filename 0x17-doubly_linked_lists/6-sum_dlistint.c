/* Title: 6-sum_dlistint.c */

#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all
 * the data (n) of a dlistint_t linked list
 * @head: head ptr
 * @a_dk coding 
 *
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	/* initializng the sum */
	int total = 0;

	while (head)
		total = total + head->n, head = head->next;
	return (total);
}

