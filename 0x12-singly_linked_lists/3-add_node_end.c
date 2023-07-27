/* Title: add_node */
/* add header files */
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - function that  adds a new node at the end of a linked list
 * @head: pointer to pointer to the node list
 * @str: string to put in the new node
 * @a_idk
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	/* variable declaration and initialization */
	unsigned int index = 0;
	list_t *new_node;
	list_t *prev_node = *head;

	while (str[index])
	{
		index = index + 1;
	}
	new_node = malloc(sizeof(list_t)); /* assigning dynamic mem */
	/* checking for error or null value */
	if (!new_node)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = index;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (prev_node->next)
	{
		prev_node = prev_node->next;
	}
	prev_node->next = new_node;
	return (new_node);
}
