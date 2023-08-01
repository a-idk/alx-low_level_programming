/* Title: 100-reverse_listint.c */
/* include header file */
#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: points to 1st node in the list
 * @a_idk
 *
 * Return: a pointer to the first node of the reversed new list
 */
listint_t *reverse_listint(listint_t **head)
{
	/* declare variables */
	listint_t *next = NULL, *prev_node = NULL;

	while (*head)
	{
		next = (*head)->next, (*head)->next = prev_node;
		prev_node = *head, *head = next;
	}
	*head = prev_node;
	return (*head);
}
