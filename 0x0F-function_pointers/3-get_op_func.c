/* include header files */
#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - function that selects the correct function to perform
 * the operation asked by the user
 * @s: input string argument
 * @a_idk
 *
 * Return: pointer to the function operator given as a parameter.
 */


int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {{"+", op_add}, {"-", op_sub}, {"*", op_mul}, {"/", op_div},
			{"%", op_mod}, {NULL, NULL},};

	/* initializing variable */
	int index = 0;

	while ((ops[index].op != NULL) && (*(ops[index].op) != *s))
	{
		index += 1;
	}
	return (ops[index].f);
}
