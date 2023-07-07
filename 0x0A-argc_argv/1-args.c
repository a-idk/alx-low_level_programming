/* include header files */
#include "main.h"
#include <stdio.h>

/**
 * main - function that prints the number of arguments passed into it
 * @argc: number of arguments in command line
 * @argv: array of arguments
 * @a_idk
 *
 * Return: Always 0 (Success!)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
