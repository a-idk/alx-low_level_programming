/* Title: 2-add_node.c */
/* include header files */
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function that adds a new node at the beginning of the list_t list
 * @head: pointer to pointer to the list_t list
 * @str: string to be added to the node
 * @a_idk
 *
 * Return: the pointer to the newly added element
 */

list_t *add_node(list_t **head, const char *str)
{
	/* initialize variable */
	unsigned int length_new = 0;
	list_t *just_added;

	while (str[length_new])
	{
		length_new = length_new + 1;
	}
	/* allocating dynamic memory */
	just_added = malloc(sizeof(list_t));
	/* checking for NULL value */
	if (!just_added)
	{
		return (NULL);
	}
	else
	{
		just_added->str = strdup(str);
		just_added->len = length_new;
		just_added->next = (*head);
		/* reassigning */
		(*head) = just_added;
	}
	return (*head); /* end of program */
}
