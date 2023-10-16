#include "main.h"

/**
 * _isalpha - function that checks for alphabetic characters
 * @c: is the character to be determined whether in upper or lower case
 * written by @a_idk
 * Return: Always 0 (Success!)
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
