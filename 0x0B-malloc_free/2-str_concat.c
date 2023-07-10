/* include header files */
#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @a_idk
 * Return: concat (s1-s2)
 */
char *str_concat(char *s1, char *s2)
{
	/* declaring variables */
	int index_1 = 0, index_2 = 0;
	char *concat;

	/* checking if NULL is passed */
	if (s1 == NULL)
		s1 = ""; /* treat as empty string */
	if (s2 == NULL)
		s2 = ""; /* treat as empty string */
	while (s1[index_1] != '\0')
		index_1++;
	while (s2[index_2] != '\0')
		index_2++;
	/* assigning dynamic memory */
	concat = malloc(sizeof(char) * (index_1 + index_2 + 1));
	if (concat == NULL)
		return (NULL);
	index_1 = 0;
	index_2 = 0;
	while (s1[index_1] != '\0')
	{
		concat[index_1] = s1[index_1];
		index_1++;
	}
	while (s2[index_2] != '\0')
	{
		concat[index_1] = s2[index_2];
		index_1++;
		index_2++;
	}
	concat[index_1] = '\0';
	return (concat);
}
