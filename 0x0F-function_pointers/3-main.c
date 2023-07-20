/* include header files */
#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	/* declaring variables */
	int num1;
	int num2;
	char *op;

	/* ensuring only 3 arguments per time (num1, operator, num2) */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* converting arguments to integer */
	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	/* ensuring no division by zero or infinite value */
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	/* checking for Null value */
	if ((op[1] != '\0') || (get_op_func(op) == NULL))
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
