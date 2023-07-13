/* include header files */
#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of memory to concatenate
 * @a_idk
 * Return: concat (s1-s2)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/* declaring variables */
	unsigned int index1 = 0, index2 = 0, x = 0, y = 0;
	char *concat;

	/* checking if NULL is passed */
	if (s1 == NULL)
		s1 = ""; /* treat as empty string */
	if (s2 == NULL)
		s2 = ""; /* treat as empty string */
	/* count the letters in s1 and s2 */
	while (s1[index1] != '\0')
		index1++;
	while (s2[index2] != '\0')
		index2++;

	if (n < index2)
		concat = malloc(sizeof(char) * (index1 + n + 1));
	else
		concat = malloc(sizeof(char) * (index1 + index2 + 1));
	if (concat == NULL)
		return (NULL);

	while (x < index1)
	{
		concat[x] = s1[x];
		x++;
	}

	while (n < index2 && x < (index1 + n))
		concat[x++] = s2[y++];

	while (n >= index2 && x < (index1 + index2))
		concat[x++] = s2[y++];

	concat[x] = '\0';
	return (concat);
}
