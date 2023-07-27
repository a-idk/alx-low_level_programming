/* Title: 4–free_list.c */
/* include header files */
#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees the linked list
 * @head: the freed list_t list
 * @a_idk
 *
 * Return: Nada!
 */

void free_list(list_t *head)
{
	/* declaration of variable */
	list_t *interim;

	while (head)
	{
		interim = head->next;
		free(head->str);
		free(head);
		head = interim;
	}
}
