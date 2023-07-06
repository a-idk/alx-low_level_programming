/* include header files */
#include "main.h"

/**
 * check_str - recursive function that checks for palindrome
 * @s: input string
 * @it: iterator
 * @len_str: string length
 * @a_idk
 *
 * Return: 1 if true, and 0 if not
 */

int check_str(int it, int len_str, char *s)
{
	if (*(s + it) != *(s + len_str - 1))
	{
		return (0);
	}
	if (it >= len_str)
	{
		return (1);
	}
	else
	{
		return (check_str(it + 1, len_str - 1, s));
	}
}

/**
 * _strlen - function that returns string length
 * @str: input string
 * @a_idk
 *
 * Return: string length
 */

int _strlen(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(str + 1));
	}
}

/**
 * is_palindrome - function that returns 1 if palindrome and 0 otherwise
 * @s: input string
 * @a_idk
 *
 * Return: 1 if it is, 0 it's not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	else
	{
		return (check_str(0, _strlen(s), s));
	}
}
