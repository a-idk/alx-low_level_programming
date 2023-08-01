/* Title: 101-print_listint_safe.c */
/* include header files */
#include <stdio.h>
#include "lists.h"


/**
 * listint_loop_num - function that counts the unique of nodes in a looped list
 * @head: points to the head of the list
 * @a_idk
 *
 * Return: 0 size if no loop else size of unique loop
 */

size_t listint_loop_num(const listint_t *head)
{
	/* variable declaration and initialization */
	const listint_t *you, *me;
	size_t node;

	node = 1;
	/* checking for NULL */
	if (head == NULL || head->next == NULL)
	{
		return (0);
	}

	you = head->next, me = (head->next)->next;

	while (me)
	{
		if (you == me)
		{
			you = head;
			while (you != me)
				node += 1, you = you->next, me = me->next;
			you = you->next;
			while (you != me)
				node += 1, you = you->next;
			return (node);
		}
		you = you->next, me = (me->next)->next;
	} return (0);
}

/**
 * print_listint_safe - function that prints a listint_t list
 * @head: points to the head of the list.
 * @a_idk
 *
 * Return: number of node
 */

size_t print_listint_safe(const listint_t *head)
{
	/* declaring and initializing variables */
	size_t i = 0, node = 0;

	node = listint_loop_num(head); /* calling the count function */

	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	} else
	{
		for (i = 0; i < node; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (node);
}
