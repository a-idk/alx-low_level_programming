/* include header files */
#include "main.h"

/**
 * *leet - function that encodes into 1337
 * @c: the given string
 * @a_idk
 * Return: c
 */

char *leet(char *c)
{
	int index1, index2;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (index1 = 0; c[index1] != '\0'; index1++)
	{
		for (index2 = 0; index2 <= 10; index2++)
		{
			if (c[index1] == s1[index2])
			{
				c[index1] = s2[index2];
			}
		}
	}
	return (c);
}
