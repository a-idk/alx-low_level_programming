/* include header files */
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function
 * @argc: argument size
 * @argv: array of arguments
 * @a_idk
 *
 * Return: Always 0 (Success!)
 */

int main(int argc, char *argv[])
{
	/*declaring variables */
	int index = 0;
	int num_bytes;
	char *array;

	/* ensuring the number of argument is the correct one */
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	/* else */
	num_bytes = atoi(argv[1]); /* converting the argument to integer */
	/* checking for -ve number of bytes */
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	array = (char *)main;
	while (index < num_bytes)
	{
		if (index == num_bytes - 1)
		{
			printf("%02hhx\n", array[index]);
			break;
		}
		printf("%02hhx ", array[index]);
		index++;
	}
	return (0);
}
