/* Title: 0-read_textfile.c */

/* include header files */
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that creates a file
 * @filename: name of the file to be created
 * @txt_content: NULL terminated string to write to file
 * @a_idk
 *
 * Return: 1 if SUCCESS else -1 if FAIL
 */

ssize_t read_textfile(const char *filename, size_t txt_content)
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
	buff = malloc(sizeof(char) * txt_content);

	rd = read(fd, buff, txt_content);
	wr = write(STDOUT_FILENO, buff, rd);

	/* close file and memry */
	free(buff), close(fd);
	return (wr);
}
