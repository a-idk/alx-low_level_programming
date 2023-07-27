/* Title: 0-print_list.c */
/* include header files */
#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints ll the elements of a list_t list
 * @h: pointer to the const list_s/list_t
 * @a_idk
 *
 * Return: size or number of nodes
 */

size_t print_list(const list_t *h)
{
	/* declaring and initializing variable */
	size_t ch = 0;

	/* looping through the nodes */
	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u]%s\n", h->len, h->str);
		}
		h = h->next;
		ch = ch + 1;
	}
	return (ch);
}
