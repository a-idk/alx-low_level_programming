/* Title: 3-cp.c */

/* include header file */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * cannot_read - function that checks for error 98 - cannot read
 * @file1: the file to check for error
 * @buff: the value of the buffer
 * @argv: argument vector
 * @a_idk
 *
 * Return: Nada!
 */

void cannot_read(int file1, char *buff, char *argv)
{
	if (file1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't read from the file %s\n", argv);
		free(buff);
		exit(98);
	}
}


/**
 * cannot_write - function that checks for error 99 - cannot read
 * @file1: the file to check for error
 * @buff: the value of the buffer
 * @argv: argument vector
 * @a_idk
 *
 * Return: Nada!
 */

void cannot_write(int file1, char *buff, char *argv)
{
	if (file1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv);
		free(buff), exit(99);
	}
}

/**
 * cannot_close - function that checks for error 100 - cannot read
 * @file1: the file to check for error
 * @buff: the value of the buffer
 * @argv argument vector
 * @a_idk
 *
 * Return: Nada!
 */

void cannot_close(int file1, char *buff)
{
	if (file1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %i\n", file1);
		free(buff), exit(100);
	}
}

/**
 * main - program that copies the content of a file to another file
 * @argc: The number of arguments vector
 * @argv: pointer to the array of the arguments
 * @a_idk
 *
 * Return: int 0 on success
 */

int main(int argc, char *argv[])
{
	/* declaring variables | fd = open, rd = read, wr = write */
	char *buff1;
	int fd, check1, check2, f;

	/* ensuring 2 arguments per time */
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	/* dynamic memory allocation */
	buff1 = malloc(sizeof(char) * BUFF_SIZE);
	if (!buff1)
	{
		return (0);
	}
	/* file operation */
	fd = open(argv[1], O_RDONLY);
	cannot_read(fd, buff1, argv[1]);
	f = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	cannot_write(f, buff1, argv[2]);

	while (check2 >= BUFF_SIZE)
	{
		check1 = read(fd, buff1, BUFF_SIZE);
		if (check1 == 0)
			break;
		cannot_read(check1, buff1, argv[1]);
		check2 = write(f, buff1, check1);
		cannot_write(check2, buff1, argv[2]);
	}
	check1 = close(f);
	cannot_close(check1, buff1);
	check1 = close(fd);
	cannot_close(check1, buff1);
	free(buff1);
	return (0);
}
