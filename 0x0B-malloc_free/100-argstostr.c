/* include header files */
#include "main.h"
#include <stdlib.h>

/**
 * argstostr - func that concatenates all the arguments
 * @ac: argument number
 * @av: argument array/size
 * @a_idk
 *
 * Return: string s
 */

char *argstostr(int ac, char **av)
{
	/*declare variables */
	int index, index2;
	int x = 0, y = 0;
	char *s;

	if (ac == 0 || av == NULL) /* first condition */
	{
		return (NULL);
	}
	for (index = 0; index < ac; index++)
	{
		for (index2 = 0; av[index][index2]; index2++)
			y++;
	}
	y = y + ac;
	/* allocating dynamic memory */
	s = malloc(sizeof(char) * y + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < ac; index++)
	{
		for (index2 = 0; av[index][index2]; index2++)
		{
			s[x] = av[index][index2];
			x++;
		}
		if (s[x] == '\0')
		{
			s[x++] = '\n';
		}
	}
	return (s);
}
