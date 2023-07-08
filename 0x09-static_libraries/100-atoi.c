/* Include main  header files */
#include "main.h"

/**
 * _atoi - function that converts a string to an integer
 * @s: string character to be converted
 * @a_idk
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	/* declaring and initializing variables */
	int length_s = 0, count = 0, minus = 0, final = 0, check = 0, calc_dig = 0;

	/* loop begins */
	while (s[length_s] != '\0')
	{
		length_s++;
	}
	while ((count < length_s) && (check == 0))
	{
		if (s[count] == '-')
		{
			++minus;
		}
		if (s[count] >= '0' && s[count] <= '9')
		{
			calc_dig = s[count] - '0';
			if (minus % 2)
				calc_dig = -calc_dig;
			final = final * 10 + calc_dig;
			check = 1;
			if (s[count + 1] < '0' || s[count + 1] > '9')
				break;
			check = 0;
		}
		count++;
	}
	if (check == 0)
	{
		return (0);
	}
	return (final);
}
