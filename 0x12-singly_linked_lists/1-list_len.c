/* Title: 1-list_len.c */
/* include header file */
#include "lists.h"
#include <stdlib.h>

/**
 * list_len - function that returns the number of elem in a linked list_t list
 * @h: pointer to the constant user defined list
 * @a_idk
 *
 * Return: n (elements in h)
 */

size_t list_len(const list_t *h)
{
	/* variable declaration and initialization */
	size_t numb = 0;

	/* loop through list */
	while (h)
	{
		numb = numb + 1;
		h = h->next;
	}
	return (numb);
}
