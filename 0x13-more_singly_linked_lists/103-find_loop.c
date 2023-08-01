/* Title: 103-find_loop.c */
/* include header file */
#include "lists.h"

/**
 * find_listint_loop - functino that finds the loop in a linked list
 * @head: searched linked list
 * @a_idk
 *
 * Return: the address of the node where the loop starts
 * else NULL if no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	/* declaring and initializing variables */
	listint_t *this = head, *that = head;

	/* check for NULL */
	if (!head)
	{
		return (NULL);
	}
	while (this && that && that->next)
	{
		that = that->next->next, this = this->next;
		if (that == this)
		{
			this = head;
			while (this != that)
			{
				this = this->next, that = that->next;
			}
			return (that);
		}
	} return (NULL);
}
