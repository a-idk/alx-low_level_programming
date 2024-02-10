#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

/* libraries/header files */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/* Mandatory prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/* advanced prototype */
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

/* typedef struct */

/**
 * struct listint_s - linked list
 * @i: integer
 * @idx: node index
 * @next: ptr to next node
 */
typedef struct listint_s
{
	int i;
	size_t idx;
	struct listint_s *next;
} listint_t;

listint_t *jump_list(listint_t *list, size_t size, int value);

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

skiplist_t *linear_skip(skiplist_t *list, int value);

#endif	/* search_algos.h */
