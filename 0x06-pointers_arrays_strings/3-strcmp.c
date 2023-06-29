/* include header files */
#include "main.h"
#include <stdio.h>

/**
 * *_strcmp - function that compares two strings
 * @s1: first string
 * @s2: second string
 *  * @a_idk
 * Return: Always 0 (Success!)
 */

int _strcmp(char *s1, char *s2)
{
	int index = 0;

	while ((s1[index] != '\0') && (s2[index] != '\0'))
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
		index = index + 1;
	}
	return (0);
}
