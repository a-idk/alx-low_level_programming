/* include header files */
#include "main.h"
#include <stdio.h>

/**
 * main - function that prints all arguments it receives
 * @argc: number of arguments in command line
 * @argv: array of arguments
 * @a_idk
 *
 * Return: Always 0 (Success!)
 */

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}
