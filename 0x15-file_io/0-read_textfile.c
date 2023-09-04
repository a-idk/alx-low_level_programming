/* Title: 0-read_textfile.c */
/* Rematch */

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
	/* declaring variables */
	ssize_t wr, rd;
	int f;
	char *buff;

	/* opening the file in read only mode */
	f = open(filename, O_RDONLY);
	/* checking for error in opening */
	if (f == -1)
	{
		return (0);
	}
	/* allocating dynamic memory */
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	/* reading operation */
	rd = read(f, buff, letters);
	if (rd == -1)
	{
		free(buff), close(f);
		return (0);
	}
	/* writing operation */
	wr = write(STDOUT_FILENO, buff, rd);
	if (wr == -1)
	{
		free(buff), close(f);
		return (0);
	}
	/* close file and memry */
	close(f);
	return (rd);
}
