/* include header files */
#include "main.h"

/**
 * *rot13 - function that encodes a string with rot13
 * @c: the given string
 * @a_idk
 * Return: c
 */

char *rot13(char *c)
{
	int index1, index2;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (index1 = 0; c[index1] != '\0'; index1++)
	{
		for (index2 = 0; index2 <= 52; index2++)
		{
			if (c[index1] == s1[index2])
			{
				c[index1] = s2[index2];
				break;
			}
		}
	}
	return (c);
}
