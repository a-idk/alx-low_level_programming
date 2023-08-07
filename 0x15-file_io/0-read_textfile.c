/* Title: 0-read_textfile.c */

/* include header files */
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that creates a file
 * @filename: name of the file to be created
 * @letters: NULL terminated string to write to file
 * @a_idk
 *
 * Return: 1 if SUCCESS else -1 if FAIL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wr, fd;
	char *buff;

	/* opening the file in read only mode */
	fd = open(filename, O_RDONLY);
	/* checking for error in opening */
	if (fd == -1)
	{
		return (-1);
	}

	/* allocating dynamic memory */
	buff = malloc(sizeof(char) * letters);

	rd = read(fd, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);

	/* close file and memry */
	free(buff);
	close(fd);
	return (wr);
}
