/* Title: 7-get_nodeint.c */
/* include header file */
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of linked list
 * @head: points to the 1st node in the list
 * @index: returned node index
 * @a_idk
 *
 * Return: points to node of interest else NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* declare and assign variable */
	listint_t *prev_node = head;
	unsigned int ind = 0;

	while (ind < index && prev_node)
	{
		prev_node = prev_node->next;
		ind += 1;
	} return (prev_node ? prev_node : NULL);
}
