/* Title: 3-cp.c */

/* include header files */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * error_100 - function that closes file descriptors
 * @fd: The file descriptor to be closed
 * @a_idk
 *
 * Return: Nada!
 */

void error_100(int fd)
{
	/* declare variables */
	int count;

	count = close(fd);
	if (count == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100);
}

/**
 * bytes_to_buff - function that allocates 1024 bytes for a buffer
 * @f: The name of the file buffer is storing
 * @a_idk
 *
 * Return: char pointer to the newly-allocated buffer
 */

char *bytes_to_buff(char *f)
{
	/* declare variable */
	char *buff;

	/* allocate dynamic memory */
	buff = malloc(sizeof(char) * 1024);

	/* check for Null */
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
		exit(99);
	}
	return (buff);
}

/**
 * main - program that copies the contents of a file to another file
 * @argc: The number of arguments supplied
 * @argv: An array of pointers to the arguments (vector)
 * @a_idk
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	/* declaring variable */
	char *buf;
	int file1, file2, rd, wr;

	/* checking of nos of arguments */
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	/* file operations - read */
	buf = bytes_to_buff(argv[2]);
	file1 = open(argv[1], O_RDONLY);
	rd = read(file1, buf, 1024);
	file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (rd > 0)
	{
		if (rd == -1 || file1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buf), exit(98);
		}
		/* file operations - write */
		wr = write(file2, buf, rd);
		if (file2 == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buf), exit(99);
		}
		rd = read(file1, buf, 1024);
		file2 = open(argv[2], O_WRONLY | O_APPEND);

	}
	free(buf), error_100(file1), error_100(file2);
	return (0);
}
