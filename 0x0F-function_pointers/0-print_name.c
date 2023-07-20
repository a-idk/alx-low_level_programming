/* include header files */
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name -function that prints a name
 * @name: input string
 * @f: function pointer
 * @a_idk
 *
 * Return: Nada!
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
