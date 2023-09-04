/* Title: 1-create_file.c */
/* Rematch */

/* include header files */
#include "main.h"
#include <stdlib.h>

/**
 * create_file - function that creates a file
 * @filename: name of the file to be created
 * @txt_content: NULL terminated string to write to file
 * @a_idk
 *
 * Return: 1 if SUCCESS else -1 if FAIL
 */

int create_file(const char *filename, char *txt_content)
{
	/* declaring and assigning variables */
	int length = 0;
	int wr;
	int fd;

	/* checking for NULL value */
	if (filename == NULL)
	{
		return (-1);
	}
	if (txt_content != NULL)
	{
		while (txt_content[length])
		{
			length += 1;
		}
	}

	/* opening file */
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fd, txt_content, length);

	/* if no file opens or is created */
	if (wr == -1 || fd == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
