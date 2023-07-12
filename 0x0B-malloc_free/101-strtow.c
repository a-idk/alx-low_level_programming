/* include header files */
#include "main.h"
#include <stdlib.h>

/**
 * count - func that counts the words in a string
 * @str: Input string
 * @a_idk
 *
 * Return: word count "w"
 */

int count(char *str)
{
	/* declaring and initializing variables */
	int i, word = 0, f = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			f = 0;
		}
		else if (f == 0)
		{
			f = 1;
			word++;
		}
	}

	return (word);
}

/**
 * **strtow - func that splits a string into words
 * @str: input string
 * @a_idk
 *
 * Return: pointer to an array of strings (Success), else NULL
 */

char **strtow(char *str)
{
	/* declaring variables */
	int start, index, length = 0;
	char **str_ing, *t;
	int index2 = 0, words, c = 0, end;

	while (*(str + length))
		length++;
	words = count(str);
	if (words == 0)
		return (NULL);

	str_ing = (char **) malloc(sizeof(char *) * (words + 1));
	if (str_ing == NULL)
		return (NULL);
	for (index = 0; index <= length; index++)
	{
		if (str[index] == ' ' || str[index] == '\0')
		{
			if (c)
			{
				end = index;
				t = (char *) malloc(sizeof(char) * (c + 1));
				if (t == NULL)
					return (NULL);
				while (start < end)
				*t++ = str[start++];
				*t = '\0';
				str_ing[index2] = t - c;
				index2++;
				c = 0;
			}
		}
		else if (c++ == 0)
		start = index;
	}
	str_ing[index2] = NULL;
	return (str_ing);
}
