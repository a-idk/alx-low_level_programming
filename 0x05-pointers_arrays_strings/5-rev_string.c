/* include header files */
#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string
 * @a_idk
 * return: null
 */

void rev_string(char *s)
{
	int c, ta = 0;
	char rev = s[0];

	while (s[ta] != '\0')
	{
		ta++;
	}
	for (c = 0; c < ta; c++)
	{
		ta--;
		rev = s[c];
		s[c] = s[ta];
		s[ta] = rev;
	}
}
