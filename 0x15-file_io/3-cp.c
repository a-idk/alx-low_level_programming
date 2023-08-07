/* Title: 3-cp.c */

/* include header file */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * bytes_to_buff - function that sets 1024 bytes to a buffer
 * @d_file: The name of the file buffer is storing chars for
 * @a_idk
 *
 * Return: A pointer to the newly-allocated buffer
 */

char *bytes_to_buff(char *d_file)
{
    /* declaring variable */
	char *buff;

	buff = malloc(sizeof(char) * 1024); /* allocating dynamic memory */
	if (buff == NULL) /* check for null value after allocating mem */
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", d_file), exit(99);
	return (buff);
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
	int file_from, fd, rd, wr, check1, check2;

	/* ensuring 2 arguments per time */
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	/* file operations */
	buff1 = bytes_to_buff(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	rd = read(file_from, buff1, 1024);
	fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (rd > 0)
	{
		if (file_from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff1), exit(98);
		}
		wr = write(fd, buff1, rd);
		if (wr == -1 || fd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff1);
			exit(99);
		}
		/* file operations */
		rd = read(file_from, buff1, 1024);
		fd = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(buff1);
	check1 = close(fd);
	check2 = close(file_from);
	if (check1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100);
	if (check2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	return (0);
}
